#include <iostream>
using namespace std;
void printlist(int arr[], int size) {
    for (int i = 0; i<size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;
}

void selectSort(int arr[], int n)

{

    int index_min_value;

    int temp;

    for (int i = 0; i<n - 1; i++) // outer loop tracks the sorted portion of the list

    {

        index_min_value = i; //set index_min_value to the current index of array



        for (int j = i + 1; j < n; j++) // inner loop finds the next smallest value

        {

            if (arr[j] < arr[index_min_value])

                index_min_value = j;

        }



        if (index_min_value != i)

        {

            temp = arr[i];

            arr[i] = arr[index_min_value];

            arr[index_min_value] = temp;

        }

    }

}

void insertionSort(int arr[], int length)

{

    int j, temp;



    for (int i = 0; i < length; i++)

    {

        j = i;

        while (j > 0 && arr[j] < arr[j - 1])

        { // move elements over until find the position for next element

            temp = arr[j];

            arr[j] = arr[j - 1];

            arr[j - 1] = temp;

            j--;

        }

    }

}

void swap(int *xp, int *yp)

{

    int temp = *xp;

    *xp = *yp;

    *yp = temp;

}

void bubbleSort(int arr[], int n)

{

    int i, j;

    for (i = 0; i < n - 1; i++)

    {

        // Last i elements are already in place

        for (j = 0; j < n - i - 1; j++)

            if (arr[j] > arr[j + 1])

                swap(&arr[j], &arr[j + 1]);

    }

}

void shellSort(int arr[], int n)

{

    for (int gap = n / 2; gap > 0; gap /= 2) // reduce gap by half each iteration

    {

        // Do a gapped insertion sort for this gap size.

        for (int i = gap; i < n; i++)

        {

            int temp = arr[i];

            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;

        }

    }

}

int main() {
    int arr[] = { 9, 4, 7, 2, 8, 3, 5 };
    selectSort(arr, 7);
    printlist(arr, 7);

    int arr2[] = { 9, 4, 7, 2, 8, 3, 5 };
    insertionSort(arr2, 7);
    printlist(arr2, 7);

    int arr3[] = { 9, 4, 7, 2, 8, 3, 5 };
    bubbleSort(arr3, 7);
    printlist(arr3, 7);

    int arr4[] = { 9, 4, 7, 2, 8, 3, 5 };
    shellSort(arr4, 7);
    printlist(arr4, 7);
}