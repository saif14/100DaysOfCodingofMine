#include<iostream>

using namespace std;

struct linkedlist{
    int data;
    linkedlist *next;
};

linkedlist *head;

void create(int A[], int n)
{
    int i;
    linkedlist *t, *last;
    head = new linkedlist();
    head->data = A[0];
    head->next=NULL;
    last = head;
    
    for(i=1; i<n;i++)
    {
        t = new linkedlist();
        t->data = A[i];
        t->next = NULL;
        last->next=t;
        last=t;
    }
}

void displayLinkedList(linkedlist *t)
{
    
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}

int main()
{
    int A [] = {3,5,6,7,8};
    create(A,5);
    displayLinkedList(head);

}