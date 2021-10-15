#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void push(ListNode *&head, int data)
{
    ListNode *newNode = new ListNode(data, head);
    head = newNode;
    cout << "p:" << head->val << endl;
}

void print(ListNode *head)
{
     if (head == NULL and cout << endl)
        return;
    cout << head->val << ' ';
    print(head->next);
}

ListNode *rotateRight(ListNode *head, int k)
{
    if(k==0) return head;
    ListNode* t = head;
    int sz = 0;
    while(t->next)
    {
        t=t->next;
        sz++;
    }
    t->next = head;
    sz = sz-(k%(sz+1));
    cout<<"sz: "<<sz<<endl;
    ListNode* temp = head;
    while(sz>0)
    {   
        cout<<temp->val<<endl;
        temp = temp->next;
        sz--;
    }
    cout<<temp->val<<endl;
    head = temp->next;
    temp->next = NULL;
    return head;
}

int main()
{
    ListNode * first = NULL;
    // push(first, 5);
    // push(first, 4);
    // push(first, 3);
    push(first, 2);
    push(first, 1);
    push(first, 0);

    ListNode* res = rotateRight(first, 4);
    print(res);
}