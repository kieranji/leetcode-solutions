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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        ListNode* tail=head;
        ListNode* output=new ListNode(0);
        ListNode* outputHead=output;
        while(true)
        {
            vector<int> nums;
            for(int i=0;i<k;i++)
            {
                if(tail==nullptr)
                {
                    for(int j=0;j<i;j++)
                    {
                        output->next=new ListNode(nums[j]);
                        output=output->next;
                    }
                    return outputHead->next;
                }
                nums.push_back(tail->val);
                tail=tail->next;
            }
            for(int i=k-1;i>-1;i--)
            {
                output->next=new ListNode(nums[i]);
                output=output->next;
            }

        }
    }
};
