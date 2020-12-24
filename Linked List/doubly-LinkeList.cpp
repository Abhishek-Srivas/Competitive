#include <bits/stdc++.h>
using namespace std;

struct Node //Declaring a Structure of NODE
{
    int data;
    Node *next;
    Node *prev;
};

Node *Head = NULL; // Initialzing a global base node to store the address

Node *getNewNode(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void insertionAtBeg(int value)
{
    Node *newNode = getNewNode(value);  
    if(Head == NULL){
        Head = newNode;
        return;
    }
    Head->prev = newNode;
    newNode->next = Head;
    Head = newNode; 
}

int main()
{
    int choice;
    while (1)
    {
        cout << "Enter the choice 1.Insert In LinkedList 2.Delete Linked List 3.Display Linked List:- \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int value;
            cout << "Enter The Value You want to Enter:- ";
            cin >> value;
            insertionAtBeg(value);
            break;
        default:
            cout << "Wrong Choice,";
        }
    }

    return 0;
}