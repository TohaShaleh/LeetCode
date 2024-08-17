class Solution {
public:
    int findComplement(int num) {
        vector<int>v;
        int ans=0,rem,i;
        while(1)
        {
            rem=num%2;
            v.insert(v.begin()+0,fabs(1-rem));

            num=num/2;
            if(num==0)
            {
                break;
            }
        }
        reverse(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            if(v[i])
            ans=ans+pow(2,i);
        }
        return ans;
    }
};