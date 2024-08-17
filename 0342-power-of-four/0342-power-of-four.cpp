class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n<0) return false;

        bool ans=false;
        int i=0;
        
        while(pow(4,i)<=n)
        {
            if(pow(4,i)==n)
            {
                ans=true;
                break;
            }
            i++;
        }
        return ans;
        
    }
};