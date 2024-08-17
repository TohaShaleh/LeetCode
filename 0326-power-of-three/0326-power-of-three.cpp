class Solution {
public:
    bool isPowerOfThree(int n) {

        if(n<0) return false;
        int i=0;
        bool ans=false;
        while(pow(3,i)<=n)
        {
            if(pow(3,i)==n)
            {
                ans=true;
                break;
            }
            i++;
        }
        return ans;
        
    }
};