class Solution {
public:
    int maximumLengthSubstring(string s) {
        int r=0,l=0;
        map<char,int>mp;
        int ans=INT_MIN;
        while(r<s.size() && r>=l)
        {
            mp[s[r]]++;
            if(mp[s[r]]>2)
            {
                while(mp[s[r]]>2)
                {
                    mp[s[l]]--;
                    l++;
                }
            }
            if(mp[s[r]]<=2)
            {
                ans=max(ans,r-l+1);
            }
            r++;
        }
        return ans;
        
    }
};