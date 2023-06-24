#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this -> data = d ;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~Node()
    {
        int value = this -> data;
        if(next != NULL)
            delete next;
            next = NULL;
    cout<<"Memory freed with data "<<value;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
     temp -> next = head;
     head -> prev = temp ;
     head = temp ;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d)
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
    if(temp -> next == NULL)
    {
        insertAtTail(tail,d);
        return ;
    }

    // creating a node For new d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next  -> prev = nodeToInsert;    
    temp -> next = nodeToInsert ;
    nodeToInsert -> prev = temp ;
    
}

void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void deleteAtPosition(Node* &head,int position)
{
    //Deleting First or Start node
    if(position == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp -> next;
        // memory free start node
        temp -> next = NULL;
        delete temp;        
    }
     
    else
    {
        //deleting any middle node or last
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while( cnt < position)
        {
            prev = curr ;
            curr = curr -> next ;
            cnt ++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next ;
        curr -> next = NULL;

        delete curr ;
    }

}

int getLength(Node* &head)
{
    int len =0;
    Node* temp = head ;

    while(temp != NULL)
    {
        len++;
        temp = temp -> next ;
    }
    return len;
}

void print(Node* &head)
{
    Node* temp = head ;

    while(temp != NULL)
    {
        cout << temp -> data<<" " ;
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

    // cout << getLength(head)<<endl;

    insertAtHead(head, 20 );
    print(head);
    insertAtHead(head, 30 );
    print(head);
    insertAtHead(head, 40 );
    print(head);
    insertAtHead(head, 50 );
    print(head);

    insertAtTail(tail, 90);
    print(head);

    insertAtPosition(head, tail, 3, 120);
    print(head);

    return 0;
}