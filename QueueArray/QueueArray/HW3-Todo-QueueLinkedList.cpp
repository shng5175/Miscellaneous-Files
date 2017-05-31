#include <iostream>
#include <string>
#include "HW3-Todo-QueueLinkedList.hpp"
using namespace std;

TodoQueueLinkedList::TodoQueueLinkedList()
{
    queueFront = NULL;
    queueEnd = NULL;
}

bool TodoQueueLinkedList::isEmpty()
{
    if (queueFront == NULL)
        return true;
    else
        return false;
}

void TodoQueueLinkedList::enqueue(std::string todoItem)
{
    TodoItem* meh = new TodoItem;
    meh->todo = todoItem;
    if (!isEmpty())
    {
        meh->next = NULL;
        queueEnd->next = meh;
        queueEnd = meh;

    }
    else
    {
        meh->next = NULL;
        queueFront = meh;
        queueEnd = meh;
    }
}

void TodoQueueLinkedList::dequeue()
{
    if (!isEmpty())
    {
        TodoItem* temp = new TodoItem;
        temp = queueFront;
        queueFront = queueFront->next;
        delete temp;
    }
    else
    {
        cout << "Queue is empty, cannot dequeue an item" << endl;
    }
}

TodoItem* TodoQueueLinkedList::peek()
{
    if (!isEmpty())
        return queueFront;
    else
        cout << "Queue is empty, cannot peek" << endl;
}

