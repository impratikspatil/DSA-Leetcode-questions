class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int,int>mp;
        
        for(auto i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        bool flag=false;
        
         for (auto i = mp.begin(); i != mp.end(); i++)
        {
            if((i->second)>1)
            {
                cout<<"tag"<<endl;
                flag=true;
                break;
               
            }
        }
        
        return flag;
        
    }
};