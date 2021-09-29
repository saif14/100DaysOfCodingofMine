#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    // ListNode(int x, ListNode *n) : val(x), next(n){}
};
// -
// This is the cycle detection algorithm for linked list
// Floyd Cycle Detection Algorithm
// -

bool hasCycle(ListNode *head)
{
    ListNode *fastPointer = head;
    ListNode *slowPointer = head;
    while(fastPointer != NULL && fastPointer->next !=NULL)
    {
        fastPointer = fastPointer->next->next;
        slowPointer = slowPointer->next;
        if(fastPointer == slowPointer)
        {
            return true;
        }
    }

    return false;

}

int main()
{
}