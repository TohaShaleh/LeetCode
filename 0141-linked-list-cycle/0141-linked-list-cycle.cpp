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
    bool hasCycle(ListNode *head) {
        ListNode *current,*tail;
        current=head;
        unordered_map<ListNode*,int>mp;
        bool ans=false;
        while(current)
        {
            if(mp.find(current)!=mp.end())
            {
                ans=true;
                break;
            }
            mp[current]=1;
            current=current->next;
        }
        return ans;
        
    }
};