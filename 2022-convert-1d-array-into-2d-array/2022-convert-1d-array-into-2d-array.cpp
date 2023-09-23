class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
      std::vector<std::vector<int>> vc(m,vector<int>(n));
        
        int s=m*n;
          
        if(s != original.size())
        {
           return {};
        }
        
       
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) {
                
                int ind=(i*n)+j;
                vc[i][j] = original[ind];
            }
      }
        
        
        return vc;
        
        
    }
};