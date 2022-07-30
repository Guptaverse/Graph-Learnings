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

// Diameter of generic tree DFS
//Explaination : 
/*
1. find the deepest node using any node as root node
2. then reset the depth array
3. Now using the deepest node find the other deepest node
4. this path will be the diameter
*/
/* 
sample Input         
    13
    1 2
    1 3 
    1 13
    2 5
    3 4
    5 6
    5 7
    5 8
    8 12
    4 9
    4 10
    10 11

output : 8

*/
vi g[N];
vi d(N);

void dfs(int sv,int parent=-1){
    // Take action on vertex after entering the vertex

    for(int child:g[sv]){
        // Take action on child before entering the child node
        // **
        // cout<<"parent :"<<sv<<" , child : "<<child<<endl;
        if(child==parent) continue;
        d[child] = d[sv]+1;
        dfs(child, sv);
        //**
        // Take action on child after exiting child node
    }
    // Take action on vertex before exiting the vertex
    
}

void normalsolver(){
    int n;
    cin>>n;
    int m = n-1;
    while(m--){
        int v1,v2;
        cin>>v1>>v2;
        // cout<<"v1 :"<<v1<<" "<<"v2 :"<<v2<<endl;
        g[v1].pb(v2);
        g[v2].pb(v1);

    }
    dfs(1,0);

    int mx_depth = -1;
    int mx_d_node;
    for(int i = 1;i<=n;i++){
        if(mx_depth<d[i]){
            mx_depth = d[i];
            mx_d_node = i;
        }
        d[i]=0;
    }
    dfs(mx_d_node);
    mx_depth = -1;
    for(int i =1;i<=n;i++){
        if(mx_depth<d[i]){
            mx_depth = d[i];
        }
    }
    cout<<mx_depth<<endl;




}



int main(){
    Fast_chalane_ke_liye;
    normalsolver();
    return 0;
}
 