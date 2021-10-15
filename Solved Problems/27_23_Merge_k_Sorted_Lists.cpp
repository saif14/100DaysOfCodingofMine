#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
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

ListNode *mergeTwoLists(ListNode *a, ListNode *b)
{
    ListNode* result = NULL;
    if(a == NULL) return b;
    else if(b == NULL) return a;

    if(a->val <= b->val)
    {
        result = a;
        result->next = mergeTwoLists(a->next, b);
    }
    else
    {
        result = b;
        result->next = mergeTwoLists(b->next, a);
    }
    return result;
}

ListNode *mergeKLists(vector<ListNode *> &lists)
{
    ListNode *mergedSortedList = NULL;
     for(auto i: lists)
        {
            ListNode *head = i;
            mergedSortedList = mergeTwoLists(mergedSortedList, i);
        }
    return mergedSortedList;
}

int main()
{
    vector<ListNode* > list;
    ListNode * first = NULL;
    push(first, 5);
    push(first, 4);
    push(first, 1);

    ListNode* second = NULL;
    push(second, 4);
    push(second, 3);
    push(second, 1);

    ListNode* third = NULL;
    push(third, 6);
    push(third, 2);

    list.push_back(first);
    list.push_back(second);
    list.push_back(third);

    ListNode* result = mergeKLists(list);
    print(result);

}