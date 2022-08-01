//https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1

/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:

    bool isValid(int i,int j ,int n, int m){
        if(i<0 || j<0) return false;
        if(i>=n || j>=m) return false;
        return true;
    }  
    void dfs(int i,int j,int n, int m,vector<vector<char>>& g){
        if(!isValid(i,j,n,m)) return;
        if(g[i][j]=='0') return;
        g[i][j]='0';
        // dfs in all direction
        dfs(i-1,j,n,m,g);
        dfs(i+1,j,n,m,g);
        dfs(i,j-1,n,m,g);
        dfs(i,j+1,n,m,g);
        dfs(i+1,j+1,n,m,g);
        dfs(i-1,j+1,n,m,g);
        dfs(i+1,j-1,n,m,g);
        dfs(i-1,j-1,n,m,g);
    }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& g) {
        // Code here
        int n = g.size();
        int m = g[0].size();
        
        int ct = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m; j++){
                if(g[i][j]=='1'){
                    dfs(i,j,n,m,g);
                    ct++;
                }
            }
        }
        return ct;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends
*/