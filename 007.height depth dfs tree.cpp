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

// DFS in tree and also find height , depth of tree.

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

output :
  d[] h[]
    0 4
    1 3
    1 3
    2 2
    2 2
    3 0
    3 0
    3 1
    3 0
    3 1
    4 0
    4 0
    1 0
*/
vi g[N];
vi h(N); // height array
vi d(N); // depth array 


void dfs(int sv,int parent){
    // Take action on vertex after entering the vertex
    for(int child:g[sv]){
        // Take action on child before entering the child node
        // **
        cout<<"parent :"<<sv<<" , child : "<<child<<endl;
        if(child==parent) continue;
        d[child] = d[sv]+1;
        dfs(child, sv);
        //**
        // Take action on child after exiting child node
        h[sv] = max(h[sv],h[child]+1);
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

        g[v1].pb(v2);
        g[v2].pb(v1);

    }
    dfs(1,0);
    
    for(int i =1 ; i<=n ; i++){
        cout<<d[i]<<" "<<h[i]<<endl;
    }


}



int main(){
    Fast_chalane_ke_liye;
    normalsolver();
    return 0;
}
 