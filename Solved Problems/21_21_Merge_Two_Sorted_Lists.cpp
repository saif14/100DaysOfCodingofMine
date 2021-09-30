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

// ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
// {
//     ListNode *resultList = new ListNode();
//     ListNode *temp = resultList;
//     temp->val = l1->val;
//     while(l1 || l2)
//     {
//         if(temp->val <= l1->val)
//         {
//             temp->val = l1->val;
//             temp = temp->next;
//             l1 = l1->next;
//         }
//         else
//         {
//             temp->val = l2->val;
//             temp = temp->next;
//             l1 = l2->next;
//         }
//     }

//     return resultList;
// }

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if (l1 == NULL && l2 == NULL)
        return NULL;
    ListNode *resultList = new ListNode();
    ListNode *temp;
    temp = resultList;
    while (l1 && l2)
    {

        if (l1->val <= l2->val)
        {
            temp->val = l1->val;
            cout << "l1: " << l1->val << " t: " << temp->val << endl;
            l1 = l1->next;
            temp->next = new ListNode();
            temp = temp->next;
        }
        else
        {
            // cout<<l2->val;
            temp->val = l2->val;
            cout << "l2: " << l2->val << " t: " << temp->val << endl;
            l2 = l2->next;
            temp->next = new ListNode();
            temp = temp->next;
        }
    }
    while (l1)
    {
        temp->val = l1->val;
        cout << "l3: " << l1->val << " t: " << temp->val << endl;
        l1 = l1->next;
        if (l1 != NULL)
            temp->next = new ListNode();
        temp = temp->next;
    }
    while (l2)
    {
        // cout<<"l4: "<<l2->val<<endl;
        temp->val = l2->val;
        // cout<<"temp: "<<l2->val<<endl;
        l2 = l2->next;
        // cout<<"l4: "<<l2->val<<" t: "<<temp->val<<endl;
        if (l2 != NULL)
            temp->next = new ListNode();
        temp = temp->next;
    }

    return resultList;
}

int main()
{
}