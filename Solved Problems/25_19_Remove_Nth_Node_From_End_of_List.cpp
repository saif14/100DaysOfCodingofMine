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
int listLentgh(ListNode *head)
{
    int count = 0;
    ListNode *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    n = listLentgh(head) - n;
    ListNode *prev = NULL;
    ListNode *curr = head;
    int c = 0;
    while (curr)
    {
        if (c == n)
        {
            if (curr == head)
            {
                // head = head->next;
                ListNode *t = curr;
                curr = curr->next;
                delete t;
                head = curr;
                break;
            }
            else
            {
                prev->next = curr->next;
                ListNode *t = curr;
                curr = curr->next;
                delete t;
                break;
            }
        }
        prev = curr;
        curr = curr->next;
        c++;
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
    removeNthFromEnd(head, 4);
    print(head);
}