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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==nullptr)
        {
            return head;
        }
        ListNode* headCopy=head;
        ListNode* last;
        int size=0;
        while(headCopy!=nullptr)
        {
            last=headCopy;
            headCopy=headCopy->next;
            size++;
        }
        k%=size;
        if(k==0)
        {
            return head;
        }
        last->next=head;
        for(int i=0;i<size-k;i++)
        {
            last=head;
            head=head->next;
        }
        last->next=nullptr;
        return head;
    }
};
