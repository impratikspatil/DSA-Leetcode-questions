class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int>vc;
        int cnt=0;
        
        
        for(int i=0;i<2;i++)
        {
      
        for(auto i=0;i<nums.size();i++)
        {
            
            vc.push_back(nums[i]);
        }
            
        }
        
        return vc;
       
        
    }
};