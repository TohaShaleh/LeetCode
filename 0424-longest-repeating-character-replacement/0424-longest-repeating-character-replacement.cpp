class Solution {
public:
    int characterReplacement(string s, int k) {
        int r=0,l=0;
        vector<int>v;
        unordered_map<char,int>m;
        int mx=INT_MIN,ans;
        while(r<s.size() && l<=r)
        {
            m[s[r]]++;
            if(m[s[r]]>mx) mx=m[s[r]];
            ans=(r-l+1)-mx;
            if(ans<=k)
            {
                v.push_back(r-l+1);
            }
            else
            {
                if(m[s[l]]==mx)
                {
                    mx--;
                }
                m[s[l]]--;
                l++;
            }
            r++;
        }
        return *(max_element(v.begin(),v.end()));
        
    }
};