#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data ;
    Node* next ;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL; 
    }
};

void insertAtHead(Node* &head , int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp ;
}

void insertAtEnd(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp; 

}

void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
   // insert at head
   if(position ==1)
   {
    insertAtHead(head,d);
    return ;
   } 
     
   
    Node* temp = head;

    int count = 1;

    while(count <   position -1)
    {
        temp = temp -> next;
        count++;
    }
    // insert at tail
    if(temp -> next == NULL)
    {
        insertAtEnd( tail, d);
        return;
    }


    // Creating a node for new G
    Node* nodetoInsert = new Node(d);
    nodetoInsert -> next =  temp -> next;
    temp -> next = nodetoInsert ;
}


void print(Node* &head )
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp -> data << " ";
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
    insertAtHead(head , 20);   
    print(head);
   
    insertAtEnd(tail , 30);   
    print(head);
    return 0;
}