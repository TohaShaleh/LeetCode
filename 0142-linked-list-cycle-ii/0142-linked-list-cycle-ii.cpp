/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode *temp,*ans=NULL;
        temp=head;
        unordered_map<ListNode*,int>mp;

        while(temp)
        {
            if(mp.find(temp)!=mp.end())
            {
                ans=temp;
                break;
            }
            mp[temp]=1;
            temp=temp->next;

        }
        return ans;
    }
};