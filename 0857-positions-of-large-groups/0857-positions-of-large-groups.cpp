class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        vector<int>v;
        int r=1,count=1,ind1=0,a;
        char prev,curr;
        prev=s[0];
        while(r<s.size())
        {
            curr=s[r];
            if(curr==prev)
            {
                count++;
                if(count>2)
                {
                    a=ind1;
                    if(r==s.size()-1)
                    {
                        v.push_back(a);
                         v.push_back(r);
                        ans.push_back(v);
                        v.clear();

                    }
                }
            }
            else
            {
                if(count>2)
                {
                    v.push_back(a);
                    v.push_back(r-1);
                    ans.push_back(v);
                    v.clear();
                }
                count=1;
                prev=s[r];
                ind1=r;
            }
            r++;
        }
        return ans;
        
    }
};