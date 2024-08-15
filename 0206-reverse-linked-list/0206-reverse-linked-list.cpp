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
    ListNode* reverseList(ListNode* head) {

        // Reverse linked list by value

        // ListNode *temp;
        // temp=head;
        // vector<int>v;
        // while(temp)
        // {
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }
        // int i=v.size()-1;
        // temp=head;
        // while(temp)
        // {
        //     temp->val=v[i];
        //     i--;
        //     temp=temp->next;
        // }
        // return head;


        // Reverse linked list by reversing Nodelist

        ListNode *temp1,*temp,*head1;
        temp=head;
        head1=nullptr;
        while(temp)
        {
            if(head1==nullptr)
            {
                head1=new ListNode(temp->val);
            }
            else
            {
                temp1=new ListNode(temp->val);
                temp1->next=head1;
                head1=temp1;
            }
            temp=temp->next;
        }
        return head1;
        
    }
};