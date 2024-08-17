class Solution {
public:
    int mySqrt(int x) {

        long long int n=1,count=0;

        while(n*n<=x)
        {
            count++;
            n++;
        }
        return count;
        
    }
};