class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(list1==nullptr)
        {
            return list2;
        }
        else if(list2==nullptr)
        {
            return list1;
        }
        else
        {
            ListNode* output;
            ListNode* copy;
            if((list1->val)>(list2->val))
            {
                output=new ListNode(list2->val);
                copy=output;
                list2=list2->next;
            }
            else
            {
                output=new ListNode(list1->val);
                copy=output;
                list1=list1->next;
            }
            
            while(list1!=nullptr&&list2!=nullptr)
            {
                if((list1->val)>(list2->val))
                {
                    output->next=list2;
                    output=output->next;
                    list2=list2->next;
                }
                else
                {
                    output->next=list1;
                    output=output->next;
                    list1=list1->next;
                }
            }
            if(list1==nullptr&&list2==nullptr)
            {
                return copy;
            }
            else if(list1==nullptr)
            {
                output->next=list2;
                return copy;
            }
            else
            {
                output->next=list1;
                return copy;
            }
        }
    }
};
