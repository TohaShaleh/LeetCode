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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp,*temp1,*prev;
        temp=head;
        
        int k=0,sz=0;

        while(temp)
        {
            sz++;
            temp=temp->next;
        }
        n=sz-n;
        
        temp=head;

        if(n==0)
        {
            temp1=head;
            head=head->next;
            delete temp1;
        }
        else
        {
            while(temp->next!=nullptr && k<n)
            {
                prev=temp;
                temp=temp->next;
                k++;
            }
            if(temp)
            {
                prev->next=temp->next;
                delete temp;
            }
        }
        return head;


        // int k=1;
        // ListNode *temp2,*head2,*prev;
        // temp=head1;
        // if(n==1)
        // {
        //     temp2=head1;
        //     head1=head1->next;
        //     delete temp2;
        // }
        // else
        // {
        //     while(temp->next!=nullptr && k<n)
        //     {
        //         prev=temp;
        //         temp=temp->next;
        //         k++;
        //     }
        //     if(temp)
        //     {
        //         prev->next=temp->next;
        //         delete temp;
        //     }
        // }
        // return head1;


        
    }
};