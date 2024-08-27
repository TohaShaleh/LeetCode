class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,j,ans=0;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]<target)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
        return ans;
        
    }
};