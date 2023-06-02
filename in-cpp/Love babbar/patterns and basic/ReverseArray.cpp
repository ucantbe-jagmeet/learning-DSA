#include <bits/stdc++.h>
using namespace std;
 
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
 

int main()
{   int arr[] = {11, 22, 33, 44, 55, 66};
     
    int n = sizeof(arr) / sizeof(arr[0]);
 

    printArray(arr, n);

    rvereseArray(arr, 0, n-1);
     
    cout << "Reversed array is" << endl;
     
    printArray(arr, n);
     
    return 0;
}