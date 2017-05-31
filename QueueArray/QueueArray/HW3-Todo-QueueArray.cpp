#include <iostream>
#include <string>
#include "HW3-Todo-QueueArray.hpp"
using namespace std;

TodoQueueArray::TodoQueueArray()
{
    queueFront = 0;
    queueEnd = 0;
}

bool TodoQueueArray::isEmpty()
{
    if (queueFront == queueEnd)
        return true;
    else
        return false;
}

bool TodoQueueArray::isFull()
{
    if ((queueEnd % MAX_QUEUE_SIZE) == queueFront)
        return true;
    else
        return false;
}

void TodoQueueArray::enqueue(std::string todoItem)
{
    if (!isFull())
    {
        queueEnd++;
        queue[queueEnd % MAX_QUEUE_SIZE]->todo = todoItem;
    }
    else
    {
        cout << "Queue is full, cannot add an item" << endl;
    }
}

void TodoQueueArray::dequeue()
{
    if (!isEmpty())
    {
        int a = queueFront--;
        queueFront = a % MAX_QUEUE_SIZE;
    }
    else
    {
        cout << "Queue is empty, cannot dequeue an item" << endl;
    }
}

TodoItem* TodoQueueArray::peek()
{
    if (!isEmpty())
    {
        return queue[queueFront];
    }
    else
    {
        cout << "Queue is empty, cannot peek" << endl;
    }
}

