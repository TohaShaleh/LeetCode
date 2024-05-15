class Solution {
public:
    int appendCharacters(string s, string t) {
        int ans=0;
        int i=0;
        while(i<s.size())
        {
            if(*t.begin()==s[i])
            {
                t.erase(t.begin());
            }
            i++;
        }
        return t.size();

        
    }
};