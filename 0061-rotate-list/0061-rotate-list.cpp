
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp,*temp1,*head1,*tail;
        head1=nullptr;
        temp=head;
        vector<int>v;

        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }

        if(v.size()>0) {
            k=k%v.size();

        while(k--)
        {
            v.insert(v.begin()+0,v.back());
            v.pop_back();
        }

        for(auto u:v)
        {
            if(head1==nullptr)
            {
                head1=new ListNode(u);
                tail=head1;
            }
            else
            {
                tail->next=new ListNode(u);
                tail=tail->next;
            }

        }

        }

        return head1;
        
    }
};