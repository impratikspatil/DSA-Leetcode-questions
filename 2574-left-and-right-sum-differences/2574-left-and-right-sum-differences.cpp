class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        vector<int>vc;
        
        for(auto i=0;i<nums.size();i++)
        {
            int ele;
            int leftsum=accumulate(nums.begin(),nums.begin()+i,0);
            int rightsum=accumulate(nums.begin()+i+1,nums.end(),0);
            
            ele=leftsum-rightsum;
            ele=abs(ele);
            vc.push_back(ele);
        }
        
        return vc;
        
    }
};