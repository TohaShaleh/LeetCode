class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        string ans="";
        int i=0;
        vector<string>arr1;
        for(i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto str:arr)
        {
            if(mp[str]==1)
            {
                arr1.push_back(str);
            }
        }

        for(i=0;i<arr1.size();i++)
        {
            if(i==k-1)
            {
                ans=arr1[i];
                break;
            }
        }
        return ans;

        
    }
};