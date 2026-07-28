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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int num1=0;
        int num2=0;
        int result=0;
        int carry=0;
        ListNode* head=new ListNode();
        ListNode* tail=head;
        while(l1!=nullptr||l2!=nullptr)
        {
            if(l1!=nullptr)
            {
                num1=l1->val;
            }
            else
            {
                num1=0;
            }
            if(l2!=nullptr)
            {
                num2=l2->val;
            }
            else
            {
                num2=0;
            }
            result=num1+num2+carry;
            if(result<10)
            {
                carry=0;
                tail->next=new ListNode(result);
            }
            else
            {
                carry=1;
                tail->next=new ListNode(result-10);
            }
            if (l1 != nullptr) {
              l1 = l1->next;
            }
            if (l2 != nullptr) {
              l2 = l2->next;
            }
            tail=tail->next;
        }
        if(carry!=0)
        {
            tail->next=new ListNode(1);
        }   
        return head->next;
    }
};
