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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp=head,*prev,*temp1;
        int n=0;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        int position=n/2;
        int k=0;
        temp=head;
        if(position==0)
        {
            temp1=head;
            head=head->next;
            delete temp1;
        }
        else{

            while(temp->next!=nullptr && k<position)
            {
                k++;
                prev=temp;
                temp=temp->next;
            }
            if(temp)
            {
                prev->next=temp->next;
                delete temp;
            }

        }
        return head;
        
        
    }
};