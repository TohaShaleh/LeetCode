class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          // Sorting the string lexicographically
          sort(strs.begin(),strs.end());
          string s1,s2,s;
          s1=strs[0];
          s2=strs[strs.size()-1];
          for(int i=0;i<s1.size();i++)
          {
            if(s1[i]!=s2[i])
            {
                break;
            }
            if(s1[i]==s2[i])
            {
                s.push_back(s1[i]);
                
            }
          }
          return s;
    }
};