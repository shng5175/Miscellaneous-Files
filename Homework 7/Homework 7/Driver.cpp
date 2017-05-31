#include <iostream>
#include <string>
#include "PatientQueue.hpp"
using namespace std;

void processNextPatient(PatientQueue* queue);

int main()
{
    PatientQueue *queue = new PatientQueue();
    queue->enqueue(22, "Lila");
    processNextPatient(queue);
    queue->printList();

    processNextPatient(queue);

    queue->enqueue(3, "Liz");
    queue->printList();
    queue->enqueue(19, "Xylo");
    queue->printList();
    queue->enqueue(20, "Zedder");
    queue->printList();
    queue->enqueue(15, "Ratner");
    queue->printList();
    queue->enqueue(7, "Tattle");
    queue->printList();
    queue->enqueue(6, "Sassy");
    queue->printList();
    queue->enqueue(2, "Elle");
    queue->printList();
    queue->enqueue(1, "Alph");
    queue->printList();
    queue->enqueue(5, "Ophra");
    queue->printList();
    queue->enqueue(4, "Mommy");
    queue->printList();

    processNextPatient(queue);
    queue->printList();

    cout << queue->size() << " patient" << (queue->size() == 1 ? "" : "s") << " currently waiting." << endl;
    
    queue->enqueue(1, "Aso");
    queue->printList();
    queue->enqueue(8, "Vinnie");
    queue->printList();

    delete queue;

    return 0;
}

void processNextPatient(PatientQueue* queue)
{
    if (queue == NULL)
    {
        cout << "No one waiting!" << endl;
    }
    else if (!queue->isEmpty())
    {
        Patient *next = queue->dequeue();
        cout << "===\nNEXT! - " << next->name << endl;
        delete next;
    }
}
