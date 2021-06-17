class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL;
        ListNode* t;
        t=result;
        int carry=0;
        while(l1 || l2)
        {
            int sum = (l1?(l1->val):0 )+ (l2?(l2->val):0) + carry;
            carry = sum/10;
            
            if(result == NULL)
            {
                result = new ListNode(sum%10);
                t = result;
            }
            else
            {
                ListNode *temp = new ListNode(sum%10);
                t->next = temp;
                t = temp;
                //result->next = new ListNode(sum/10+carry);
                
            }
                  
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
                
        }
        if(carry!=0)
        {
             t->next = new ListNode(carry);
           
               
        }
        
        return result;
    }
};