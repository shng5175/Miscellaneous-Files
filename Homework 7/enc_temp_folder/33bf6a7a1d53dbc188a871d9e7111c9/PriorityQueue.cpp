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
    cout << "MERPPPP" << endl;
    lastIndex = lastIndex + 1;
    cout << "MERPPPP" << endl;
    cout << waitlist[90];
    waitlist[lastIndex]->priority = priority;
    cout << "MERPPPP" << endl;
    waitlist[lastIndex]->name = name;
    cout << "MERPPPP" << endl;
    int merp = lastIndex;
    //for (; merp > 1 && priority > waitlist[merp / 2]->priority; merp /= 2) {
      //  cout << merp << endl << lastIndex << waitlist[lastIndex]->priority << endl;
    //}
    return;
}

Patient* PatientQueue::dequeue() {		// returns pointer to patient record and removes from array
    return 0;
}

void PatientQueue::printList() {
    if (isEmpty() == true) {
        cout << "No one waiting!" << endl;
    }
    else {
        cout << "Patients Waiting" << endl;
        for (int i = 0; i <= lastIndex;i++) {
            cout << waitlist[i]->priority << " " << waitlist[i]->name << endl;
        }
    }
    return;
}

void PatientQueue::swap(int index1, int index2) {	// swap the contents in the array

}

//Patient PatientQueue::*waitlist[100];
//int PatientQueue::lastIndex;