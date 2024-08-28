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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int>mp;
        ListNode *temp,*ans,*head1;
        head1=NULL;
        ans=NULL;
        temp=head;
        while(temp)
        {
            mp[temp->val]++;
            temp=temp->next;
        }
        for(auto u:mp)
        {
            if(u.second==1)
            {
                if(head1==NULL)
                {
                    head1=new ListNode(u.first);
                    ans=head1;
                }
                else
                {
                    temp=new ListNode(u.first);
                    head1->next=temp;
                    head1=temp;
                }
            }
        }
        return ans;
        
    }
};