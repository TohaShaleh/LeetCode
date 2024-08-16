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

        ListNode *temp1,*prev,*curr,*temp;
        prev=nullptr;
        curr=head;
        temp=head;
        while(curr)
        {
            temp1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp1;

        }
        
        head=prev;

        return head;
        
    }
};