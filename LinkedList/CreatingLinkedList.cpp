#include<iostream>

using namespace std;

struct linkedlist{
    int data;
    linkedlist *next;
};

linkedlist *head;

void create(int B[], int n)
{
    int i;
    linkedlist *t, *last;
    head = new linkedlist();
    head->data = B[0];
    head->next=NULL;
    last = head;
    
    for(i=1; i<n;i++)
    {
        t = new linkedlist();
        t->data = B[i];
        //cout<<"t :"<<t->data;
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

//Recursively Displaying linkedlist

void displayLinkedListRecursively(linkedlist *t)
{
    if(t!=NULL)
    {
        cout<<t->data<<" ";
        displayLinkedListRecursively(t->next);
    }

}

//Couting the number of elements in a linked list
//First iteratively it will be implemented, next recursively

int coutingIteratively(linkedlist *p)
{
    int len=0;
    while(p!=0)
    {
        len++;
        p=p->next;

    }
    return len;
}

//Now recursively implementing it
int coutingRecursively(linkedlist *p)
{
    if(p==0)
    return 0;
    return coutingRecursively(p->next)+1;
}

//Summing all the values in the linked.
//First iteratively, then Recursively

//Iteratively
int sumIter(linkedlist *p)
{
    int sum=0;
    while(p!= NULL)
    {
        sum+= p->data;
        p=p->next;
    }
    return sum;
}

//Recursively
int sumRecur(linkedlist *p)
{
    if(p==0)
    return 0;
    return sumRecur(p->next)+p->data;
}

//Maximum element in a linked list
//Iteratively
int maximumValIter(linkedlist *p)
{
    int maxVal = -32768;
    while(p!=0)
    {
        if(p->data > maxVal)
        {
            maxVal = p->data;
        }
        p=p->next;
    }
    return maxVal;
}

//Recursively
int maxValRecur(linkedlist *p)
{
    int x=0;
    if(p==0)
    return -32768; //the most min value for int;
    x = maxValRecur(p->next);
    return x> p->data?x:p->data;

}

//For searching in linked we usually do linear search
//There are two better method 1. Trasnposition and 2. Move to Head
//we will use linear search and move to head

//Liinear Search Iterative
linkedlist * LinearSearchIter(linkedlist *p, int key)
{
    while(p!=0)
    {
        if(p->data==key)
        return p;
        p=p->next;
    }
    return NULL;
}

//Recursively
linkedlist * LinearSearchRecur(linkedlist *p, int key)
{
    if(p==0)
    return NULL;
    else
    {
        if(p->data==key)
        return p;
        else
        LinearSearchRecur(p->next, key);
    }
}
//Move to head Search
linkedlist * MoveToHeadSearch(linkedlist *p, int key)
{
    linkedlist *q=NULL;
    while(p!=0)
    {
        if(p->data==key)
        {
            q->next = p->next;
            p->next = head;
            head = p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

//Inserting in a linked list
void insert(linkedlist *p, int index, int x)
{
    linkedlist *temp = new linkedlist();
    temp->data = x;
    
    if(index <0 || index > coutingIteratively(p) )
    return;

    if(index == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        for(int i=0; i<index-1; i++)
        {
            p=p->next;
        }
        temp->next = p->next;
        p->next=temp;

    }

    


}


int main()
{
    // int B [] = {200, 9,5,6,100,8,10,12};
    // create(B,8);
    
    // displayLinkedList(head);
    // cout<<endl;
    // cout<<"After calling recursive display: ";
    // displayLinkedListRecursively(head);
    // cout<<endl;
    
    // cout<<"len of the linkedlist iter: "<<coutingIteratively(head)<<endl;
    // cout<<"len of linkedlist recursively: "<<coutingRecursively(head)<<endl;

    // cout<<"Sum of linkedlist iter: "<<sumIter(head)<<endl;
    // cout<<"Sum of linkedlist recur: "<<sumRecur(head)<<endl;

    // cout<<"Max Val: "<<maximumValIter(head)<<endl;

    // linkedlist *valSearch = LinearSearchIter(head, 8);
    // if(valSearch)
    // cout<<"Found the value: "<<valSearch->data<<endl;
    // else
    // cout<<"Not Found";

    // valSearch = LinearSearchRecur(head,201);
    // if(valSearch)
    // cout<<"Val Found Recur: "<<valSearch->data<<endl;
    // else
    // cout<<"Not Found";

    // valSearch = MoveToHeadSearch(head,8);
    // if(valSearch)
    // cout<<"Val Found Move to Head: "<<valSearch->data<<endl;
    // else
    // cout<<"Not Found";
    // cout<<"Displaying after move to head: "<<endl;
    // displayLinkedList(head);
    // cout<<endl;

    // cout<<"Inserting at the beginning "<<endl;
    // insert(head, 3, 101);
    // displayLinkedList(head);
    // cout<<endl;

    //Creating a new linked list using inset
    insert(head, 0, 10);
    insert(head, 1, 20);
    insert(head, 2, 30);

    displayLinkedList(head);


}