class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int sz=nums.size();
        int prefixsum=1;
        vector<int>prearrya(sz);
        int suffixsum=1;
        vector<int>suffixarray(sz);
       
        for(auto i=0;i<sz;i++)
        {
            prefixsum=prefixsum*nums[i];
            prearrya[i]=prefixsum;
            
            suffixsum=suffixsum*nums[sz-i-1];
            suffixarray[sz-i-1]=suffixsum;
            
        }
        
        vector<int>vc(sz);
        for(auto i=0;i<sz;i++)
        {
            if(i==0)
            {
                vc[i]=suffixarray[i+1];
                    
            }
            else if(i==sz-1)
            {
                vc[i]=prearrya[i-1];
            }
            else{
                vc[i]=prearrya[i-1]*suffixarray[i+1];
            }
        }
        
        return vc;
    }
};