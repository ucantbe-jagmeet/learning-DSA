#include <iostream>
using namespace std;

int main ()
{

    int arr[] = { 50,20,40,30,10};
    int max, min;
    max = min = arr[0];

       for (int i = 0; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int avg = (max - min)/2;
    cout << "The average number is " << avg<< endl;

}
