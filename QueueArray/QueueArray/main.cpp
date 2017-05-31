#include <iostream>
#include <string>
#include "HW3-Todo-StackLinkedList.hpp"
#include "HW3-Todo-StackLinkedList.cpp"
using namespace std;
int main() {
    cout << "Testing HW3-Todo-StackLinkedList.cpp:" << endl;
    cout << "     input: 0 1 2 3 4" << endl;
    cout << "  expected: 4 3 2 1 0 \n            Stack empty, cannot peek.\n            Stack empty, cannot pop an item." << endl;
    cout << "    output: ";
    TodoStackLinkedList testList;
    string strings[] = { "0","1","2","3","4" };
    for (int i = 0; i < 5; i++) {
        testList.push(strings[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (testList.peek()) {
            cout << testList.peek()->todo << " ";
        }
        testList.pop();
    }
    cout << endl << "            ";
    testList.peek();
    cout << "            ";
    testList.pop();
    cout << endl;
}