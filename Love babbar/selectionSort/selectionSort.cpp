#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int minIndex;
    for (int i = 0; i < n-1; i++)
    {
        minIndex = i;
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[minIndex])
            minIndex = j;

        if(minIndex!=i)
        swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {34,53,51,12,11,10,99,24,919,88};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
