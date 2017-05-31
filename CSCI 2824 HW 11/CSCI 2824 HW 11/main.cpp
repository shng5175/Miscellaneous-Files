#include <iostream>
using namespace std;

int randint(int x)
{
    return (1.0*x*rand()) / (1.0 + RAND_MAX);
}

int remaining(int doorA, int doorB){
    int doorC;

    //check the other doors
    if (doorA == doorB){
        doorC = randint(2);
        if (doorC >= doorA)
            ++doorC;
    }

    else{
        for (doorC = 0; doorC == doorA || doorC == doorB; ++doorC){
        }
    }
    return doorC;
}

int merp(int N, bool change){
    int win = 0;

    for (int g = 0; g < N; ++g){
        //assign all the doors
        int const wDoor = randint(3);   //assign the winning door 
        int const ori_change = randint(3);  //assign the original change
        int opend = remaining(ori_change, wDoor); //assign the open door
        int const sDoor = change ? remaining(opend, ori_change) : ori_change; //assign selected door

        if (sDoor == wDoor)
            ++win;
    }
    return win;
}

int main()
{
    int N; //number of trials

    cout << "Enter the number of trials: ";
    cin >> N;

    int nots = merp(N, false); //Not switching

    int s = merp(N, true); //Switching

    //display the not swiching and switching in percentage

    cout << "Switching: " << 100.0*s / N << "% Not Switching: " << 100.0*nots / N << "$\n";
}