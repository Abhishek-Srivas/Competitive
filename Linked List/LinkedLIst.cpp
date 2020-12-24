#include <bits/stdc++.h>
using namespace std;

struct Node //Declaring a Structure of NODE
{
    int data;
    Node *next;
};

Node *Head = NULL; // Initialzing a global base node to store the address

void insertionAtEnd(int value)
{
    Node *temp = new Node();
    temp->data = value;
    temp->next = NULL;

    if (Head == NULL)
    {
        Head = temp;
    }
    else
    {
        Node *temp1 = Head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void insertionAtBeg(int value)
{
    Node *temp = new Node();
    temp->data = value;
    temp->next = Head;
    Head = temp;
}

void display()
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteFromBeg()
{
    Node *temp = Head;
    Head = temp->next;
    free(temp);
}

void deleteFromNth(int n)
{
    Node *temp = Head;
    if(n==1){
        Head = temp->next;
        free(temp);
        return;
    }

    for (int i = 0; i < n - 2; i++)
    {
        temp = temp->next;
    }

    Node *temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
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
            insertionAtEnd(value);
            break;
        case 2:
            deleteFromBeg();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Enter the position you want to enter";
            int delVal;
            cin >> delVal;
            deleteFromNth(delVal);
            break;
        default:
            cout << "Wrong Choice,";
        }
    }

    return 0;
}