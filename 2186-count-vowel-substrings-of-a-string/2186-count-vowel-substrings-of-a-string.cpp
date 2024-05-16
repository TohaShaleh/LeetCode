class Solution {
public:
    int countVowelSubstrings(string word) {
        map<char,int>m;
        map<char,int>mv;
        m['a']=1;
        m['i']=1;
        m['e']=1;
        m['o']=1;
        m['u']=1;
        int ans=0,i,j;
        for(i=0;i<word.size();i++)
        {
            mv.clear();
            if(m[word[i]]==0)
            {
                continue;
            }
            else
            {
                mv[word[i]]++;
                for(j=i+1;j<word.size();j++)
                {
                    if(m[word[j]]==0)
                    {
                        break;
                    }
                    else
                    {
                        mv[word[j]]++;
                    }
                    if(mv.size()==5) ans++;
                }
            }
            
        }
        return ans;
        
    }
};