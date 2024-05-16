class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
   map<char,vector<int>>m;
   int i,j,ans=0;
        for(i=0;i<s.size();i++)
        {
            m[s[i]].push_back(i);
        }
        for(i=0;i<words.size();i++)
        {
            string ss=words[i];
            int posi=-1;
            for(j=0;j<ss.size();j++)
            {
                auto it=upper_bound(m[ss[j]].begin(),m[ss[j]].end(),posi);
                if(it==m[ss[j]].end())
                {
                    break;
                }
                posi=*it;
                if(j==ss.size()-1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
