class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int x=INT_MIN;
        if(n<0) return false;
        bool ans=false;
        int i=0;
        while(x<=n)
        {
            x=pow(2,i);
            if(x==n)
            {
                ans=true;
                break;
            }
            i++;
        }

        return ans;
        
    }
};