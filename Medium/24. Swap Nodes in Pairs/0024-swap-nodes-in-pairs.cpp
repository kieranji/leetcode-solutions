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
    ListNode* swapPairs(ListNode* head) 
    {
        if(head==nullptr||(head->next)==nullptr)
        {
            return head;
        }
        ListNode* memory1;
        ListNode* memory2;
        ListNode* tail=head;
        head=head->next;
        int flag=0;
        while(true)
        {
            memory1=tail->next;
            if(flag==0)
            {
                tail->next=memory1->next;
                memory1->next=tail;
                flag=1;
            }
            else
            {
                memory2=memory1->next;
                memory1->next=memory2->next;
                memory2->next=memory1;
                tail->next=memory2;
                tail=memory1;
            }
            if((tail->next)==nullptr||((tail->next)->next)==nullptr)
            {
                return head;
            }
        }
    }
};
