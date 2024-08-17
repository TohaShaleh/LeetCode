class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int x=nums1.size()+nums2.size();
        double ans;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        if(x%2==0 && x>0)
        {
            ans=(nums1[(x/2)-1]+nums1[x/2])/2.0;
        }
        else
        {
            ans=(nums1[x/2]);

        }
        return ans;
        
    }
};