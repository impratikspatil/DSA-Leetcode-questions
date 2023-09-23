class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int cnt=0,x=1;
        int ind=arr.size()-1;
        
        for(auto i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                
                arr.insert(arr.begin()+i+1,0);
                arr.erase(arr.end()-x);
                i++;
            }
            
    
        }
        
    }
};