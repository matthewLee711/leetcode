class Solution { //NOT COMPLETE
public:
    int numIslands(vector<vector<char>>& grid) {
        //move column by column
        //check if it is 1. if it is, add to visited.
        //if it is move down until reach end
        //check if can move to next column

        //Visited vector [i][j]
        vector<vector<bool>> visited;
        int total = 0;
        //get total num of elem in matrix
        for(int i = 0; i < grid.size(); i++) {
            total += grid[i].size();
        }


        return 0;
    }


};
