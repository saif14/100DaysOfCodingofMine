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

ListNode *deleteDuplicates(ListNode *head)
{
    map<int, int> c;
    // ListNode* res;
    ListNode* t=head;
    ListNode* prev = NULL;
    while(t)
    {
        if(c[t->val]!=0)
        {
            ListNode* tmp = t;
            prev->next = tmp->next;
            t=t->next;
            delete tmp;
            continue;
        }
        c[t->val]++;
        prev = t;
        t=t->next;
    }

    return head;

}

int main()
{
    ListNode *first = NULL;
    push(first, 4);
    push(first, 1);
    push(first, 5);
    push(first, 1);
    push(first, 4);
    push(first, 3);

    ListNode *res = deleteDuplicates(first);
    print(res);
}