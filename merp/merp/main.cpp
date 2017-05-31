// ==========================================
// File: student starter code
// Author: Matt Bubernak
// Date: 1/29/2015
// Modified: Fall 2016 E.S.Boese
// Description: Linked List Fun
// ==========================================

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

struct city
{
    string 	name; 			// name of the city
    city 	*next; 			// pointer to the next city
    int 	numberMessages;	// how many messages passed through this city
    string 	message; 		// message we are sending accross
};

city* addCity(city *head, city *previous, string cityName);
city* deleteCity(city *head, string cityName);
city* deleteEntireNetwork(city *head);
city* searchNetwork(city *head, string cityName);
city* loadDefaultSetup(city *head);
void transmitMsg(city *head, string receiver, string filename);
void printPath(city *head);
void displayMenu();
city* handleUserInput(city *head);

/* Do NOT modify main function */
int main(int argc, char* argv[])
{
    // pointer to the head of our network of cities
    city *head = NULL;

    head = handleUserInput(head);
    printPath(head);
    head = deleteEntireNetwork(head);
    if (head == NULL)
        cout << "Path cleaned" << endl;
    else
        printPath(head);

    cout << "Goodbye!" << endl;
    return 0;
}

/*
* Purpose: handle the interaction with the user
* @param head the start of the linked list
* @return the start of the linked list
* Do NOT modify
*/
city* handleUserInput(city *head)
{
    bool quit = false;
    string s_input;
    int input;

    // loop until the user quits
    while (!quit)
    {
        displayMenu();

        // read in input, assuming a number comes in
        getline(cin, s_input);
        input = stoi(s_input);

        switch (input)
        {
            // print all nodes
        case 1: 	//rebuild network
            head = loadDefaultSetup(head);
            printPath(head);
            break;

        case 2:		// print path
            printPath(head);
            break;

        case 3: //message is read in from file
        {
            string cityReceiver;
            cout << "Enter name of the city to receive the message: " << endl;
            getline(cin, cityReceiver);

            cout << "Enter the message to send: " << endl;
            string message;
            getline(cin, message);

            transmitMsg(head, cityReceiver, message);
        }
        break;

        case 4:
        {
            string newCityName;
            string prevCityName;
            cout << "Enter a new city name: " << endl;
            getline(cin, newCityName);

            cout << "Enter the previous city name (or First): " << endl;
            getline(cin, prevCityName);

            // find the node containing prevCity
            city *tmp = NULL;
            if (prevCityName != "First")
                tmp = searchNetwork(head, prevCityName);
            else if (prevCityName == "First")
            {
                tmp = head;
            }
            // add the new node
            head = addCity(head, tmp, newCityName);
            printPath(head);
        }
        break;

        case 5: 	// delete city
        {
            string city;
            cout << "Enter a city name: " << endl;
            getline(cin, city);
            head = deleteCity(head, city);
            printPath(head);
        }
        break;

        case 6: 	// delete network
            head = deleteEntireNetwork(head);
            break;

        case 7: 	// quit
            quit = true;
            cout << "Quitting... cleaning up path: " << endl;
            break;

        default: 	// invalid input
            cout << "Invalid Input" << endl;
            break;
        }
    }
    return head;
}

/*
* Purpose: Add a new city to the network
*   between the city *previous and the city that follows it in the network.
* @param head pointer to start of the list
* @param previous name of the city that comes before the new city
* @param cityName name of the new city
* @return pointer to first node in list
*/
city* addCity(city *head, city *previous, string cityName)
{
    city *newCity = new city;//creates the new city
    newCity->name = cityName;
    newCity->next = NULL;
    city *tmp = head;
    if (head == NULL)//if path is empty, puts new city at beginning of path
    {
        cout << "prev: NULL" << "  new: " << cityName << endl;
        head = newCity;
        //cout << head->name << endl;
    }

    else if (previous == head)//case for inputing a city at the beginning of path
    {
        cout << "prev: NULL" << "  new: " << cityName << endl;
        newCity->next = head;
        head = newCity;
    }

    else if (previous == NULL)//if path is not empty, adds cities to end of list
    {
        previous = head;
        while (previous != NULL && previous->next)
        {
            previous = previous->next;
        }

        cout << "prev: " << previous->name << "  new: " << cityName << endl;
        previous->next = newCity;
        //head = previous;
        //cout << (head->next)->name << endl;
    }

    else//adds city after a specific city in list
    {
        while (tmp->next && tmp->next != previous)
        {
            tmp = tmp->next;
        }

            cout << "prev: " << previous->name << "  new: " << cityName << endl;
            newCity->next = previous->next;
            previous->next = newCity;
            //head = previous;
            //cout << (head->next)->name << endl;
    }
    return head;
}


/*
* Purpose: Search the network for the specified city and return a pointer to that node
* @param ptr head of the list
* @param cityName name of the city to look for in network
* @return pointer to node of cityName, or NULL if not found
* @see addCity, deleteCity
*/
city *searchNetwork(city *ptr, string cityName)
{
    if (ptr == NULL)
    {
        cout << "Empty list" << endl;
        return 0;
    }

    while (ptr->name != cityName)
    {
        ptr = ptr->next;
    }
   // cout << ptr->name << endl;
    return ptr;
}

/*
* Purpose: deletes all cities in the network starting at the head city.
* @param ptr head of list
* @return NULL as the list is empty
*/
city* deleteEntireNetwork(city *ptr)
{

    city *tmp = ptr;
    while (tmp != NULL)
    {
        tmp = ptr->next;
        cout << "deleting: " << ptr->name << endl;
        delete ptr;
        ptr = tmp;
    }

    //cout << ptr << endl;
    cout << "Deleted network" << endl;
    
    // return head, which should be NULL
    return ptr;
}

/* sends messages from file */
void transmitMsg(city *head, string receiver, string message)
{
    if (head == NULL)
    {
        cout << "Empty list" << endl;
        return;
    }

    city *sender = head;
    city *next = head;
    while (sender->name != receiver)
    {
        //sender->numberMessages = sender->numberMessages + 1;
        cout << sender->name << " [# messages passed: " << sender->numberMessages << "] received: " << sender->message << endl;
        next = sender->next;
        next->message = sender->message;
        sender = sender->next;
    }
}


/*
* Purpose: delete the city in the network with the specified name.
* @param head first node in list
* @param cityName name of the city to delete in the network
* @return head node of list
*/
city* deleteCity(city *head, string cityName)
{
    city *tmp = head;
    city *previous = head;
    //cout << tmp->name << endl;
    while (tmp->next && tmp->name != cityName)
    {
        //cout << tmp->name << endl << previous->name << endl;
        previous = tmp;
        tmp = tmp->next;
    }
    if (tmp->name != cityName)
    {
        // if the city dosn't exist, nothing we can do.
        // 		use this output statement
        cout << "City does not exist." << endl;
    }
    else if(tmp == head)//if the city to be deleted is at the head of the list, the new head of the list is the the next element
    {
        head = head->next;
    }
    else
    {
        //cout << tmp->name << endl << previous->name << endl;
        previous->next = tmp->next;
        //cout << tmp->name << endl << previous->name << endl;
    }

    delete tmp;
    return head;
}


/*
* Purpose: prints the current list nicely
* @param ptr head of list
*/
void printPath(city *ptr)
{
    city *tmp = ptr;
    cout << "== CURRENT PATH ==" << endl;

    // If the head is NULL
    if (ptr == NULL)
        cout << "nothing in path" << endl;

    else
    {
        while (tmp->next)
        {
            cout << tmp->name << " -> ";
            tmp = tmp->next;
        }
        cout << tmp->name << " -> NULL" << endl << endl;
    }

}

/*
* Purpose: populates the network with the predetermined cities
* @param head start of list
* @return head of list
*/
city* loadDefaultSetup(city *head)
{
    head = deleteEntireNetwork(head);
    //cout << head << endl;
    head = addCity(head, NULL, "Los Angeles");
    head = addCity(head, NULL, "Pheonix");
    head = addCity(head, NULL, "Denver");
    head = addCity(head, NULL, "Dallas");
    head = addCity(head, NULL, "Atlanta");
    head = addCity(head, NULL, "New York");

    return head;
}

/*
* Purpose; displays a menu with options
*/
void displayMenu()
{
    cout << "Select a numerical option:" << endl;
    cout << "======Main Menu=====" << endl;
    cout << "1. Build Network" << endl;
    cout << "2. Print Network Path" << endl;
    cout << "3. Transmit Message" << endl;
    cout << "4. Add City" << endl;
    cout << "5. Delete City" << endl;
    cout << "6. Clear Network" << endl;
    cout << "7. Quit" << endl;
}

