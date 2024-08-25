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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       vector<int>v1,v2,v3;
       ListNode *head,*ans;
       int sum;
       head=l1;
       while(head)
       {
        v1.push_back(head->val);
        head=head->next;
       }
       head=l2;
       while(head)
       {
        v2.push_back(head->val);
        head=head->next;
       }
       int i=0,temp=0;
       while(!v1.empty() && !v2.empty())
       {
         sum=v1.front()+v2.front()+temp;
         v3.push_back(sum%10);
         temp=sum/10;
         v1.erase(v1.begin());
         v2.erase(v2.begin());
       }
       while(!v1.empty())
       {
        sum=v1.front()+temp;
        v3.push_back(sum%10);
         temp=sum/10;
         v1.erase(v1.begin());

       }
       while(!v2.empty())
       {
        sum=v2.front()+temp;
        v3.push_back(sum%10);
         temp=sum/10;
         v2.erase(v2.begin());

       }
       if(temp>0) v3.push_back(temp);

       head=NULL;

       while(!v3.empty())
       {
         if(head==NULL)
         {
            head=new ListNode(v3.front());
            ans=head;
         }
         else
         {
            ListNode* temp1=new ListNode(v3.front());
            head->next=temp1;
            head=temp1;
         }
         v3.erase(v3.begin());
       }
        return ans;
    }
      
       
};