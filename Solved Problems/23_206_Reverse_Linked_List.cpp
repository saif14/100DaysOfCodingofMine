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


ListNode *reverseList(ListNode *head)
{
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* nxt;
    while(curr)
    {   
        nxt = curr->next ;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        // nxt = (curr->next)==NULL?NULL:(curr->next);
    }
    head = prev;
    return head;

}

int main()
{
    ListNode *temp = NULL;
    


    push(temp, 4);
  
    push(temp, 3);
    push(temp, 2);
    push(temp, 1);

    print(temp);
    reverseList(temp);
    print(temp);
    
}