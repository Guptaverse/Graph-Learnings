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

// BFS standard

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
order :
1 2 3 13 5 4 6 7 8 9 10 12 11 
level of every node : 
1: 0
2: 1
3: 1
4: 2
5: 2
6: 3
7: 3
8: 3
9: 3
10: 3
11: 4
12: 4
13: 1

*/
vi g[N];
bool vis[N];
int level[N];

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty()){
        int cur_v = q.front(); //cur_v : current vertex
        q.pop();
        cout<<cur_v<<" "; // order where we can see in order our nodes are poping out from queue
        for(int child : g[cur_v]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                level[child] = level[cur_v]+1;
            }
        }

    }
    cout<<endl;
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
    bfs(1);
    for(int i = 1;i<=n;i++){
        cout<<i<<": "<<level[i]<<endl;
    }

}



int main(){
    Fast_chalane_ke_liye;
    normalsolver();
    return 0;
}
 