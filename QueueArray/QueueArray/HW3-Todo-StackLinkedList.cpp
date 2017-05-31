#include <iostream>
#include <string>
#include "HW3-Todo-StackLinkedList.hpp"
using namespace std;

TodoStackLinkedList::TodoStackLinkedList()
{
    stackHead = NULL;
}

bool TodoStackLinkedList::isEmpty()
{
    if (stackHead == NULL)
        return true;
    else
        return false;
}

void TodoStackLinkedList::push(std::string todoItem)
{
    if (!isEmpty()) {
        TodoItem* mer = new TodoItem;
        mer->todo = todoItem;
        TodoItem* temp = new TodoItem;
        temp = stackHead;
        mer->next = temp;
        stackHead = mer;
        //cout<<stackHead<<endl;

    }
    else
    {
        TodoItem* mer = new TodoItem;
        mer->todo = todoItem;
        mer->next = NULL;
        stackHead = mer;
        //cout<<stackHead->todo<<endl;
    }
}

void TodoStackLinkedList::pop()
{
    if (!isEmpty())
    {
        TodoItem* temp = new TodoItem;
        temp = stackHead;
        stackHead = stackHead->next;
        //cout<<stackHead<<endl;
        delete temp;
    }
    else
    {
        cout << "Stack is empty, cannot pop an item" << endl;
    }
}

TodoItem* TodoStackLinkedList::peek()
{//cout<<stackHead<<endl;
    if (!isEmpty()) {
        //cout<<stackHead->todo<<endl;
        return stackHead;
    }
    else
        cout << "Stack is empty, cannot peek" << endl;
}
