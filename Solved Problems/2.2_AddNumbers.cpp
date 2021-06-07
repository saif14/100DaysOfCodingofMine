//The problem is not solved yet
//Need to change many things

struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(NULL) {}
      ListNode(int x) : val(x), next(NULL) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1=0, num2=0;
        int counter=1;
        int flag1=1, flag2=1;
        while(flag1!=0 && flag2!=0)
        {
            if(l1!=NULL)
            {
                num1 = num1 + counter*(l1 -> val);
                l1 = l1 -> next;
            }
            else
            {
                flag1 = 0;
            }
            if(l2!=NULL)
            {
                num2 = num2 + counter*(l2 -> val);
                l2 = l2 -> next;
            }
            else
            {
                flag2 = 0;
            }
            
        }
        
        ListNode* res = new ListNode();
        
        int result = num1 + num2;
        while(result > 0)
        {
            res -> val = result%10;
            result = result/10;
            res = res -> next;
        }
        
        return res;
        
    }
    
};