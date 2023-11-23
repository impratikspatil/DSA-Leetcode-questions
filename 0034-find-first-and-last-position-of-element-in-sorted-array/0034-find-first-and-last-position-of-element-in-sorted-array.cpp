class Solution {
public:

    int bs_first(vector<int>&nums,int target)
    {
        int low=0;
        int s=nums.size();
        int high=s-1;
        int res=-1;

        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(nums[mid]==target)
            {
                res=mid;
                
                high=mid-1;    
                
                
            } 
            if(target>nums[mid])low=mid+1;
            if(target<nums[mid])high=mid-1;

        }
        return res;
    }


      int bs_last(vector<int>&nums,int target)
    {
        int low=0;
        int s=nums.size();
        int high=s-1;
        int res=-1;

        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(nums[mid]==target )
            {
                res=mid;
                
                     low=mid+1;
                
               
            } 
            if(target>nums[mid])low=mid+1;
            if(target<nums[mid])high=mid-1;

        }
        return res;
    }



    vector<int> searchRange(vector<int>& nums, int target) {

            int f_ind=bs_first(nums,target);
            int l_ind=bs_last(nums,target);

            vector<int>vc;
            vc.push_back(f_ind);
            vc.push_back(l_ind);

            return vc;

        
    }
};