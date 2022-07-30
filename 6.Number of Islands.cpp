/*
https://leetcode.com/problems/number-of-islands/

// Sol

class Solution {
public:
    
    void dfs(int i,int j,int n,int m,vector<vector<char>>& grid){
        
        // checking if the value inside the grid 

        if(i<0 || j<0) return;
        if(i>=n || j>=m) return;
        if(grid[i][j]=='0') return;
        
        // mark this with '0' so next time it will not visit
        
        grid[i][j]='0';
        
        // calling dfs on every horizontal and vertical direction 
        
        dfs(i-1 , j , n , m , grid);
        dfs(i+1 , j , n , m , grid);
        dfs(i , j-1 , n , m , grid);
        dfs(i , j+1 , n , m , grid);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int ct = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0; j < m ; j++){
                if(grid[i][j]=='1'){
                    dfs(i , j , n , m , grid);
                    ct++;
                }
            }
        }
        return ct;
    }

};



*/

