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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head,*ans;
        int n=0;
        while(temp)
        {
            n++;
            temp=temp->next;
        }

        int a=(n/2)+1;
        int k=0;

        temp=head;
        while(temp)
        {
            k++;
            if(k==a)
            {
                ans=temp;
                break;
            }
            temp=temp->next;
        }
        return ans;
        
    }
};