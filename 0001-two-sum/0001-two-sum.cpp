class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<long long,long long>mp;
        vector<int>res;

        for(long long i=0;i<nums.size();i++)
        {
            long long rem=target-nums[i];
            if(mp.find(rem)!=mp.end())
            {
                res.push_back(i); res.push_back(mp[rem]);
                break;

            }

            mp[nums[i]]=i;

        }

      


        return res;
        
    }
};