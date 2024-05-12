class Solution {
public:
    int strStr(string haystack, string needle) {

        string s1,s2;
        s1=haystack;
        s2=needle;
        int ans;
        if(s1.find(s2)!=string::npos)
        {
            ans=s1.find(s2);
        }
        else
        {
            ans=-1;
        }
        return ans;
        
    }
};