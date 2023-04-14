class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int result =0; 
        int size1 = grid.size(); int size2 = grid[0].size();
        for(int i=0;i<size1;i++){
            for(int j =0;j<size2;j++){
                if(grid[i][j] == 0) continue;
                if(grid[i][j]){
                    result+=4;
                    if( i+1 <size1  && grid[i+1][j] == 1  )result--;
                    if( i-1 >=0 && grid[i-1][j] == 1 ) result--;
                    if( j-1>=0  && grid[i][j-1] == 1)  result--;
                    if( j+1<size2 && grid[i][j+1] == 1 )   result--;
                }
            }
        }
        return result;
    }
};
