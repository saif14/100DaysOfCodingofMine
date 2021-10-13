#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
   // ListNode(int x, ListNode *n) : val(x), next(n){}
};
{
     
        ListNode *result = new ListNode() ;
        ListNode *resultList = new ListNode();
        resultList = result;
    while(l1 != NULL && l2 != NULL)
    {   
        // cout<<"l1: "<< l1->val <<" l2: "<< l2->val <<endl;
        if(l1->val <= l2->val)
        {
            resultList = l1;
            l1 = l1->next;
            cout<<"l1: "<<resultList->val<<endl;
            resultList = resultList->next;
        }
        else{
            resultList = l2;
            l2 = l2->next;
            cout<<"l2: "<<resultList->val<<endl;
            resultList = resultList->next;
        }
    }
    if(l1 != NULL)
    {
        while(l1 != NULL)
        {
            resultList = l1;
            l1 = l1->next;
            cout<<"l3: "<<resultList->val<<endl;
            resultList = resultList->next;
        }
    }
    else{
         while(l2!=NULL)
         {
             resultList = l2;
            l2 = l2->next;
        cout<<"l4: "<<resultList->val<<endl;
            resultList = resultList->next;
         }
    }

        resultList = result;
    return resultList;;
}
int main()
{


}
