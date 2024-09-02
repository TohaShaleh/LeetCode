class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i,ans=0,sum=0;
        map<int,int>mp;
        mp[0]=1;
        
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end())
            {
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
};