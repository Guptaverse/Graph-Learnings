////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//                               Coded by Shivam Gupta :)                             //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define mod 1e9+7
#define ip(a) for(int i=0;i<a.size();i++){ cin >> a[i];}
#define op(a) for(int i=0;i<a.size();i++){ cout <<  a[i] << " ";}
#define setp(n,val) cout << setprecision(n) << fixed << val
#define pb push_back
#define Fast_chalane_ke_liye ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)(x).size()
#define f1 first
#define sec second
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector< pair<int,int> > vpii;
typedef map<int,int> mii;
typedef unordered_map<ll,ll> omll;
typedef unordered_map<int,int> omii;
const int N = 1e5+10;

// DFS on graph TC(O(V+E))

vi g[N];
bool vis[N];


void dfs(int sv){
    // Take action on vertex after entering the vertex
    vis[sv]=1;
    for(int child:g[sv]){
        // Take action on child before entering the child node
        // **
        cout<<"parent :"<<sv<<" , child : "<<child<<endl;
        if(vis[child]) continue;
        //**
        dfs(child);
        // Take action on child after exiting child node
    }
    // Take action on vertex before exiting the vertex
}

void normalsolver(){
    int n,m;
    cin>>n>>m;
    int sv;cin>>sv;
    while(m--){
        int v1,v2;
        cin>>v1>>v2;

        g[v1].pb(v2);
        g[v2].pb(v1);

    }
    for(int i =1;i<=n;i++){
        if(vis[i]) continue;
        dfs(i);
    }




}




int main(){
    Fast_chalane_ke_liye;
    normalsolver();
    return 0;
}
