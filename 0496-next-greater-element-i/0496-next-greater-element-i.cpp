class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int l=nums2.size();
        stack<int>st;
        vector<int>arr(l);
        map<int,int>mp;
        for(auto i=l-1;i>=0;i--)
        {
            while(!st.empty() && nums2[i]>st.top())
            {
                st.pop();
            }
            
            if(st.empty())
            {
                arr[i]=-1;
            }
            else{
                arr[i]=st.top();
            }
            st.push(nums2[i]);
            
            
        }
        
        for(auto i=0;i<l;i++)
        {
            mp[nums2[i]]=arr[i];
        }
        
        
        arr.clear();
        
        for(auto i=0;i<nums1.size();i++)
        {
            arr.push_back(mp[nums1[i]]);
        }
        
        
        
        return arr;
    }
};