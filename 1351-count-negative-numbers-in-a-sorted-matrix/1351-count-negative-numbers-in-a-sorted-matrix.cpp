class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int cnt=0;
        for(auto i=0;i<grid.size();i++)
        {
            for(auto j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]<0)
                {
                    cnt++;
                }
            }
        }
        
        return cnt;
        
    }
};