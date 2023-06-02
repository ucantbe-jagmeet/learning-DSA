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

void insertAtHead(Node* &head , int d)
{
    // create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtEnd(Node* &tail , int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail ,int position , int d)
{
    //insert at start
    if(position == 1)
    {
        insertAtHead(head,d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position -1)
    {
        temp = temp ->next ;
        cnt ++;
    }

    //insert at tail
    if( temp -> next == NULL)
    {
        insertAtEnd(tail , d);
        return;
    }

    // creating a node For new d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next ;
    temp -> next = nodeToInsert ;


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
    // print(head);   

    insertAtEnd(tail,20);
    insertAtEnd(tail,30);
    insertAtEnd(tail,40);
    insertAtEnd(tail,50);

    insertAtPosition( head, tail , 6, 90);

    print(head);   


    return 0;
}