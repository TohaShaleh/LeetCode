class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        string s1=words[0],s2;
        for(int i=1;i<words.size();i++)
        {
            s2=words[i];
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2) 
            { 
                words.erase(words.begin()+(i));
                i--;
            }
            s1=words[i];

        }
        return words;
        
    }
};