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

// store connected components

/* 
sample Input         
    8 6
    1 2
    1 5
    2 3
    2 4
    3 4
    6 7
*/
vi g[N];
bool vis[N];

vvi cc; // cc : connected components
vi current_cc; 


void dfs(int sv){
    // Take action on vertex after entering the vertex
    vis[sv]=1;
    current_cc.push_back(sv);
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
    while(m--){
        int v1,v2;
        cin>>v1>>v2;

        g[v1].pb(v2);
        g[v2].pb(v1);

    }
    // int ct = 0;
    for(int i =1;i<=n;i++){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        // ct++;
    }
    cout<<"No of connected components : "<<cc.size()<<endl;
    for(auto cur_cc:cc){
        for(int vertex : cur_cc){
            cout<<vertex<<" ";
        }
        cout<<endl;
    }

}



int main(){
    Fast_chalane_ke_liye;
    normalsolver();
    return 0;
}
