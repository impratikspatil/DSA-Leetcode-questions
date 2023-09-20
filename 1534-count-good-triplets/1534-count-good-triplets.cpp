class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        
        int cnt=0;
        int n=arr.size();
        
        for(auto i=0;i<n-2;i++)
        {
            for(auto j=i+1;j<n-1;j++)
            {
                for(auto k=j+1;k<n;k++)
                {
                    if(abs(arr[i] - arr[j])<=a &&
                       abs(arr[j] - arr[k])<=b &&
                       abs(arr[i] - arr[k])<=c
                      )
                    {
                        cnt++;
                    }
                }
            }
        }
        
        return cnt;
    }
};