class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        map<int,vector<int>>mp;
        bool flag=false;
        
        for(auto i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
            
        }
        
        
        for(auto i:mp)
        {
            if(i.second.size()>1)
            {
                bool ans=check(i.second,k);
                
                if(ans==true)
                {
                    flag=true;
                    break;
                }
            }
        }
        
        return flag;
        
    }
    
    
    bool check(vector<int>arr,int k)
    {
        int i=0;
        int j=1;
        bool flag=false;
        
        while(j<arr.size())
        {
            int res=abs(arr[i]-arr[j]);
            if(res<=k)
            {
                flag=true;
                break;
            }
            i++;
            j++;
        }
        
        return flag;
        
    }
};