#include <iostream>
#include <string>
#include "HW3-Todo-StackArray.hpp"
using namespace std;

TodoStackArray::TodoStackArray()
{
    stackTop = -1;
}

bool TodoStackArray::isEmpty()
{
    if (stackTop == -1)
        return true;
    else
        return false;
}

bool TodoStackArray::isFull()
{
    if (stackTop == (MAX_STACK_SIZE - 1))
        return true;
    else
        return false;
}

void TodoStackArray::push(std::string todoItem)
{
    if (!isFull())
    {
        stackTop++;
        //cout<<stackTop<<endl;
        TodoItem *item = new TodoItem;
        stack[stackTop] = item;
        item->todo = todoItem;
    }
    else
        cout << "Stack is full, cannot add new item" << endl;
}

void TodoStackArray::pop()
{
    if (!isEmpty())
        stackTop--;
    else
        cout << "Stack is empty, cannot pop an item" << endl;
}

TodoItem* TodoStackArray::peek()
{
    if (!isEmpty())
        return stack[stackTop];
    else
        cout << "Stack is empty, cannot peek" << endl;
}


