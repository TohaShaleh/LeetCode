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
    bool isPalindrome(ListNode* head) {

        bool ans=true;

        ListNode *head1,*temp1,*temp;
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

        // Now Checking Wheather Palindrome or not 
        temp=head;
        while(temp)
        {
            if(temp->val!=head1->val)
            {
                ans=false;
                break;
            }
            temp=temp->next;
            head1=head1->next;
        }

        return ans;
        
    }
};