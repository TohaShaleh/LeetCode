class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,i=0,j=0,ans=INT_MAX;
        while(i<nums.size())
        {
            sum+=nums[i];
            while(sum>=target)
            {
                ans=min(ans,(i-j+1));
                sum-=nums[j];
                j++;
            }
            i++;
        }
        if(ans==INT_MAX) ans=0;
        return ans;
        
    }
};