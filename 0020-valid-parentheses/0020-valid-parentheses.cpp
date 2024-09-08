class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    char ch=st.top();
                    st.pop();
                    if(check(ch,s[i])== false)
                    {
                        return false;
                    }
                }
            }
        }

        if(st.size()) return false;
        else return true;

    }
    

    private:
    bool check(char c1,char c2)
    {
        if( (c1=='(' && c2==')') ||
            (c1=='{' && c2=='}') || 
            (c1=='[' && c2==']')  )
          {
            return true;
          }
        else
        {
            return false;
        }
    }

   
};