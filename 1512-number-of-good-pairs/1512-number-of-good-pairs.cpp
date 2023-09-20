class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        map<int,int>mp;
        int goodPair=0;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
//          for (auto i : mp)
//            cout << i.first << " \t\t\t " << i.second << endl;
        
        for(auto i:mp)
        {
            int res=((i.second)*(i.second -1))/2;
            
            goodPair+=res;
        }
        
        return goodPair;
        
      
        
    }
};