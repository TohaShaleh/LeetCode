class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {

       
     sort(nums.begin(),nums.end());
        long long ans1=count_upto(upper,nums);
        long long ans2=count_upto(lower-1,nums);

        return ans1-ans2;
        
    }

    private:
    long long count_upto(int n,vector<int>& nums)
    {
        int i=0,j=nums.size()-1;
        long long ans=0;
        while(i<j)
        {
            long long sum=nums[i]+nums[j];
            if(sum<=n)
            {
                ans+=(j-i);
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }

};