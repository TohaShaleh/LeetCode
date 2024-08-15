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
    int pairSum(ListNode* head) {
        ListNode *temp;
        vector<int>v;
        temp=head;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }

        int n=v.size(),ans=INT_MIN;
        for(int i=0;i<n-1-i;i++)
        {
            ans=max(ans,v[i]+v[n-1-i]);
        }
        return ans;
        
    }
};