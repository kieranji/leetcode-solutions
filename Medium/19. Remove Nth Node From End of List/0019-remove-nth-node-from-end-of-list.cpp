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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* copy=head;
        int length=0;
        while(copy!=nullptr)
        {
            copy=copy->next;
            length++;
        }
        if(length==1)
        {
            ListNode* empty=nullptr;
            return empty;
        }
        length-=n;
        if(length==0)
        {
            head=head->next;
            return head;
        }
        copy=head;
        for(int i=0;i<length-1;i++)
        {
            copy=copy->next;
        }
        ListNode* copy1=copy;
        copy1=copy->next;
        copy->next=copy1->next;
        return head;
    }
};
