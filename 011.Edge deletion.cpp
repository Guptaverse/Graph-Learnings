// Edge Deletion using precomputation 
// question link : https://www.interviewbit.com/problems/delete-edge/
/*
const int M = 1e9+7;
void dfs(int sv, int parent,vector<int> g[],vector<int>&subtree_sum,vector<int>&A){
    subtree_sum[sv] += A[sv-1]; 
    for(int child : g[sv]){
        if(child==parent) continue;
        dfs(child,sv,g,subtree_sum,A);
        subtree_sum[sv] +=subtree_sum[child];
    }
}

int Solution::deleteEdge(vector<int> &A, vector<vector<int> > &B) {
    int n = A.size();
    long long ans = 0;
    vector<int> g[n+1];
    vector<int> subtree_sum(n+1,0);
    for(auto edge : B){
        g[edge[0]].push_back(edge[1]);
        g[edge[1]].push_back(edge[0]);
    }
    dfs(1,0,g,subtree_sum,A);
    for(int i =2;i<n;i++){
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1]- part1;
        ans = max(ans,(part1 * 1LL * part2)%M);
        
    }
    return ans;
    
    
}

*/