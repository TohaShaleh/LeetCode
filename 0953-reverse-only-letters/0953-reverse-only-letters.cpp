class Solution {
public:
    string reverseOnlyLetters(string s) {
        string s1,s2;
        int i=0,j=0;
        while(i<s.size())
        {
            if(isalpha(s[i]))
               s1.push_back(s[i]);
            i++;
        }

        reverse(s1.begin(),s1.end());

         i=0;
        while(i<s.size())
        {
            if(!isalpha(s[i]))
            {
                s2.push_back(s[i]);
            }
            else
            {
                s2.push_back(s1[j++]);
            }
            i++;
        }
        return s2;
        
    }
};