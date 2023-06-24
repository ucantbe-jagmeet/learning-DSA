#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //Creating Constructor
    Node(int data)
    {
        this -> data = data ;
        this -> next = NULL;
    }
};


void insertAtEnd(Node* &tail , int d)
{
    Node* temp = new Node(d);
    
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head)
{   
    Node* temp = head;

    while(temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp -> next ;
    }
    cout<<endl;
}
 

int main()
{
    Node* node1 = new Node(10);  
    Node* head = node1;
    Node* tail = node1;
    print(head);   

    insertAtEnd(tail,20);
    print(head);   
    insertAtEnd(tail,30);
    print(head);       
    insertAtEnd(tail,40);
    print(head);       
    insertAtEnd(tail,50);
    print(head);       

    return 0;
}