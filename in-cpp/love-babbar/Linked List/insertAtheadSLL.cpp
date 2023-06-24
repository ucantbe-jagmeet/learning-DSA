#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data ;
     Node* next ;

    // Creating Constructor of Node
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

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data <<" ";
        temp = temp -> next ;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10);

    cout << node1 -> data << endl;
    cout << node1 -> next << endl; 

    // head Pointed to node1
    Node* head = node1;
    print(head);
    
    insertAtHead( head , 12);
    print(head);
    insertAtHead( head , 11);
    print(head);
    insertAtHead( head , 33);
    print(head);
    insertAtHead( head , 66);
    print(head);
    
    
    return 0;
}