class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        unordered_map<string,int>mp1,mp2;
        vector<string>ans,v1,v2;

        s1+=" ";
        s2+=" ";
         
         string str="";
         int i=0;
        while(i<s1.size())
        {
            if(s1[i]==' ')
            {
                v1.push_back(str);
                str.clear();
            }
            else
            {
                str.push_back(s1[i]);
            }
            i++;
        }

        str="";
        i=0;
        while(i<s2.size())
        {
            if(s2[i]==' ')
            {
                v2.push_back(str);
                str.clear();
            }
            else
            {
                str.push_back(s2[i]);
            }
            i++;
        }


        for(auto u:v1)
        {
            mp1[u]++;
        }

        for(auto u:v2)
        {
            mp2[u]++;
        }

        for(auto u:v1)
        {
            if(mp1[u]==1 && mp2[u]==0)
            {
                ans.push_back(u);
            }
        }

        for(auto u:v2)
        {
            if(mp2[u]==1 && mp1[u]==0)
            {
                ans.push_back(u);
            }
        }


        return ans;

        
    }
};