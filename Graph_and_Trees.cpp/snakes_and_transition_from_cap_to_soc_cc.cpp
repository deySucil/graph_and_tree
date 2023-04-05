#include <bits/stdc++.h>
//Sucil_Dey
//Department of Information Technology
// J.G.E.C
#define f float
#define d double
#define newl cout<<endl
#define lp(l,u) for(int i=l;i<u;i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define test(t) int t;cin>>t;while(t--)
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define write(a,n) for(int i=0;i<n;i++) cout<<a[i]
#define int long long int
#define ui unsigned long long int
#define pub push_back
#define tata return 0 
#define ct cout
#define vec vector<int>
using namespace std;
const int N=510;
const int inf=1e11;
int g[N][N];
bool vis[N][N];
int level[N][N];
    int n,m;

bool isvalid(int i,int j){
    return i>=0 && j>=0 && i<n && j<m; 
}
vector<pair<int,int>>moves={
    {1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}
};

int bfs(){
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) mx=max(mx,g[i][j]);
    }
queue<pair<int,int>>q;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(g[i][j]==mx){
            level[i][j]=0;
            vis[i][j]=1;
            q.push({i,j});
        }
    }
}
while(!q.empty()){
    auto temp=q.front();
    int temp_x=temp.first;
    int temp_y=temp.second;
    q.pop();
    for(auto move:moves){
int x=temp_x+move.first;
int y=temp_y+move.second;
if(vis[x][y]) continue;
if(!isvalid(x,y)) continue;
level[x][y]=level[temp_x][temp_y]+1;
vis[x][y]=1;
q.push({x,y});
    }
}
int ans=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        ans=max(ans,level[i][j]);
    }
}
return ans;
}
void reset(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            vis[i][j]=0;
            level[i][j]=0;
        }
    }
}
signed main(){
 test(T){
    reset();
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>g[i][j];
    }
    cout<<bfs()<<endl;
 }             
 
 } 