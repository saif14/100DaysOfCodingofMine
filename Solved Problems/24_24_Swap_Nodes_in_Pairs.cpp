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

ListNode *swapPairs(ListNode *head)
{
    ListNode *prev = head;
    ListNode *curr = head;
    while (curr != NULL && curr->next != NULL)
    {

        prev = curr;
        curr = curr->next;
        int t = prev->val;
        prev->val = curr->val;
        curr->val = t;

        curr = curr->next;
    }
    return head;
}

int main()
{
    ListNode *head = NULL;

    push(head, 4);

    push(head, 3);
    push(head, 2);
    push(head, 1);

    print(head);

    swapPairs(head);
    print(head);
}