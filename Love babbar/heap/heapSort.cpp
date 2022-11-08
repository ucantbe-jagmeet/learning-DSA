#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size ;

    heap() 
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1 ;
        int index = size ;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index/2;

            if(arr[parent] < arr[index])
            {
                swap( arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return ;
            }
        }
        
    }

    void deletion()
    {
        if(size == 0)
        {
            cout << "Nothing to delete"<<endl;
        }

        arr[1] = arr[size];
        size--;

        //take root node to its correct possition
        int i =1;
        while(i < size)
        {
            int left = 2*i;
            int right = 2*i+1;

            if(left < size && arr[i] < arr[left])
            {
                swap(arr[i] , arr[left]);
                i = left ;
            }
            else if(right < size && arr[i] < arr[right])
            {
                swap(arr[i] , arr[right]);
                i = right ;
            }
            else
            {
                return ;
            }
        }
    }

    void print()
    {
        for(int i =1; i<=size ; i++)
        {
            cout << arr[i] <<" ";
        }
        cout<<endl;
    }

};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[largest] < arr[left]) // left <= ayega for heapSOrt
    {
        largest = left ;
    }
    if(right <= n && arr[largest] < arr[right]) // right <= ayega for heapSOrt
    {
        largest = right;
    }

    if(largest!= i)
    {
        swap(arr[largest],arr[i]);
        heapify( arr, n, largest);
    }

}


void heapSort(int arr[], int n)
{
    int size = n;
    while(size > 1)
    {
        //step 1 swap
        swap(arr[size], arr[1]);
        size--;

        //step 2
        heapify( arr, size, 1);
    }
} 

int main()
{
     
     heap h;
     h.insert(50);
     h.insert(55);
     h.insert(53);
     h.insert(52);
     h.insert(54);

     h.deletion();

    //  h.print();

    int arr[6] = { -1, 54, 53, 55, 52, 50};
    int n =5;
    
    //heap creation
    for(int i =n/2; i>0; i--)
    {
     heapify( arr, n, i);
    }

    cout << "Printing the array :"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //heapSort
    heapSort( arr, n);
     cout << "Printing the sorted array :"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }

    //maxheap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<endl<<"Element at Top "<<pq.top()<<endl;
    pq.pop();
    cout<<endl<<"Element at Top "<<pq.top()<<endl;
     return 0;
}