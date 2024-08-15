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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp;

        for(auto u:nums)
        {
            mp[u]=1;
        }

        ListNode *temp,*tail,*head1;
        temp=head;
        head1=nullptr;
        
        while(temp)
        {
            if(mp[temp->val]==0)
            {
                if(head1==nullptr)
                {
                    head1=new ListNode(temp->val);
                    tail=head1;
                }
                else
                {
                    tail->next=new ListNode(temp->val);
                    tail=tail->next;
                }
            }
            temp=temp->next;
        }
        return head1;
        
    }
};