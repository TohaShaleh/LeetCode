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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *temp,*head1,*tail1;
        vector<int>v;

        temp=head;
        int k=0;

        while(temp)
        {
            if(k>=left && k<=right-1)
            {
                v.insert(v.begin()+(left-1),temp->val);
            }
            else
            {
                v.push_back(temp->val);
            }
            k++;
            temp=temp->next;
        }


        head1=nullptr;
        for(auto u:v)
        {
            if(head1==nullptr)
            {
                head1=new ListNode(u);
                tail1=head1;
            }
            else
            {
                tail1->next=new ListNode(u);
                tail1=tail1->next;
            }
        }
        return head1;


        
    }
};