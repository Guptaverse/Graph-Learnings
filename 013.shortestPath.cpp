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
const int INF = 1e9+10;


int vis[9][9];
int level[9][9];
int getX(string s){
    return s[0]-'a';
}
int getY(string s){
    return s[1]-'1';
}
bool isValid(int x,int y){
    return x<0 || y<0 || x>8 || y>8;
}
vpii movements = {
    {2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}
};
int bfs(string src,string des){
    int x1 = getX(src); 
    int y1 = getX(src); 
    int x2 = getX(des); 
    int y2 = getX(des);
    // cout<<x1<<" "<<y1<<endl;
    // cout<<x2<<" "<<y2<<endl;
    queue<pii>q;
    q.push({x1,y1});
    vis[x1][y1]=1;
    level[x1][y1]=0;

    while(!q.empty()){
        // cout<<"hi"<<endl;
        pii v = q.front();
        int x = v.first,y = v.second;
        q.pop();
        for(auto moves : movements){
            int movesX = moves.first + x;
            int movesY = moves.second + y;
            if(!isValid(movesX,movesY)) continue;
            if(!vis[movesX][movesY]){
                q.push({movesX,movesY});
                level[movesX][movesY] = level[x][y]+1;
                vis[movesX][movesY]=1;
            }
        }
        if(level[x2][y2]!=INF) break;

    }
    return level[x2][y2];
}
void reset(){
    for(int i =0;i<9;i++){
        for(int j =0;j<9;j++){
            level[i][j]=INF;
            vis[i][j]=0;
        }
    }
}
void solver(){
    cout<<"Hi"<<endl;
    string s1,s2; cin>>s1>>s2;
    cout<<bfs(s1,s2)<<endl;
    
        reset();
    


}




int main(){
    Fast_chalane_ke_liye;
    int testcase;
    cin>>testcase;
    cout<<testcase<<endl;
    while(testcase--){
        cout<<"Hh"<<endl;
        solver();
    }
    return 0;
}
