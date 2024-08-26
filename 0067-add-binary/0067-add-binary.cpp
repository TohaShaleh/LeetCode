class Solution {
public:
    string addBinary(string a, string b) {

        string ans;
        int temp=0,sum;
        int aa,bb;

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(!a.empty() && !b.empty())
        {
            aa=a.front()-'0';
            bb=b.front()-'0';
            sum=aa+bb+temp;
            char ch = sum%2 + '0';
            ans.push_back(ch);
            temp=sum/2;
            a.erase(a.begin());
            b.erase(b.begin());
        }

        while(!a.empty())
        {
            aa=a.front()-'0';
            sum=aa+temp;
            char ch = sum%2 + '0';
            ans.push_back(ch);
            temp=sum/2;
            a.erase(a.begin());
        }
        while(!b.empty())
        {
            bb=b.front()-'0';
            sum=bb+temp;
            char ch = sum%2 + '0';
            ans.push_back(ch);
            temp=sum/2;
            b.erase(b.begin());
        }
        if(temp==1) ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};