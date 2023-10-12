class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
        vector<vector<int>>vc;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());  // because we don't need to store indices instead we need to display values of array.
        for(auto i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                
                if(sum<0)
                {
                    j++;   
                }
                else if(sum>0)
                {
                    k--;
                }
                else{
                    
                    vector<int>res={nums[i],nums[j],nums[k]};
                    vc.push_back(res);
                    
                    j++;
                    k--;
                    
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1])k--;
                    
                }
                
            }
        }
        
        return vc;
        
        
    }
};

