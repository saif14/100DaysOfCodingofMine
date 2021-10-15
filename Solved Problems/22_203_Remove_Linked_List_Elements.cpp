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

ListNode *removeElements(ListNode *head, int val)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->val == val)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return removeElements(head, val);
    }
    else
    {
        head->next = removeElements(head->next, val);
        return head;
    }
    return NULL;
}

int main()
{
    ListNode *temp = NULL;
    
    push(temp, 6);
    push(temp, 5);
    push(temp, 4);
    push(temp, 6);
    push(temp, 3);
    push(temp, 2);
    push(temp, 1);

    print(temp);
    removeElements(temp, 6);
    print(temp);

}