#include <iostream>
#include <string>
#include "PatientQueue.hpp"
using namespace std;

PatientQueue::PatientQueue() {
    lastIndex = 0;
}

PatientQueue::~PatientQueue() {	// release memory and delete queue
    lastIndex = 0;
}

int PatientQueue::size() {
    return lastIndex;
}

bool PatientQueue::isEmpty() {
    if (lastIndex == 0) {
        return true;
    }
    else {
        return false;
    }
}

void PatientQueue::enqueue(int priority, std::string name) {
    lastIndex = lastIndex + 1;
    Patient *tmp = new Patient(priority, name);
    waitlist[lastIndex] = tmp;
    cout << "Adding " << priority << " " << name << endl;
    for (int merp = lastIndex; merp > 1 && priority < waitlist[merp / 2]->priority; merp /= 2) {
        if (waitlist[merp]->priority < waitlist[merp / 2]->priority) {
            swap(merp, merp / 2);
        }
    }
    return;
}

Patient* PatientQueue::dequeue() {		// returns pointer to patient record and removes from array
    int p = waitlist[1]->priority;
    string n = waitlist[1]->name;
    //cout << p << n;
    Patient *tmp = new Patient(p, n);
    cout << "Processing " << p << " " << n << endl;
    *waitlist[1] = *waitlist[lastIndex];
    delete waitlist[lastIndex];
    int i;
    int j = 1;
    Patient *merp = waitlist[1];
    for (; (j * 2) <= lastIndex; j = i) {
        i = (j * 2);
        if (i != lastIndex && waitlist[i + 1]->priority < waitlist[i]->priority) {
            i++;
        }
        if (waitlist[i]->priority < tmp->priority) {
            swap(i, j);
        }
        else {
            break;
        }
    }
    lastIndex = lastIndex - 1;
    return tmp;
}

void PatientQueue::printList() {
    if (isEmpty() == true) {
        cout << "No one waiting!" << endl;
    }
    else {
        cout << "Patients Waiting" << endl;

        for (int i = 1; i <= lastIndex; i++) {
            int p = waitlist[i]->priority;
            string n = waitlist[i]->name;
            cout << "[" << p << "]" << " " << n << endl;
        }
    }
    return;
}

void PatientQueue::swap(int index1, int index2) {	// swap the contents in the array
    int p = waitlist[index1]->priority;
    string n = waitlist[index1]->name;
    Patient *tmp = new Patient(p, n);
    waitlist[index1] = waitlist[index2];
    waitlist[index2] = tmp;
    return;
}

//Patient *waitlist[100];
//int PatientQueue::lastIndex;