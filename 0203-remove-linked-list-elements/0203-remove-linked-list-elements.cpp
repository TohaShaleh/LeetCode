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
    ListNode* removeElements(ListNode* head, int val) {
    
        ListNode *temp,*head1,*tail1;

        temp=head;
        head1=nullptr;

        while(temp)
        {
            if(temp->val!=val)
            {
                if(head1==nullptr)
                {
                    head1=new ListNode(temp->val);
                    tail1=head1;
                }
                else
                {
                    tail1->next=new ListNode(temp->val);
                    tail1=tail1->next;
                }
            }
            temp=temp->next;
        }
        return head1;
    }
};