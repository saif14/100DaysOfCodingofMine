/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int listLen(ListNode *head){
        if(head == NULL)
            return 0;
        else 
            return 1+listLen(head->next);
    }
    ListNode* middleNode(ListNode* head) {
        int len = listLen(head);
        int mid = len/2 + 1;
        int c =1;
        while(head != NULL)
        {
            if(c==mid)
                break;
            else
            {
                c++;
                head = head->next;
            }
            
        }
        
        return head;
    }
};