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
const int N=1e5+1;
bool vis[N];
vector<int>v[N];
vector<vector<int>>vp;
vector<int>cc;
bool dfs(int vertex,int par){
    // cout<<vertex<<endl;
 vis[vertex]=true;
 cc.push_back(vertex);
 bool is_loop=false;
 for(auto child:v[vertex]){
    if(vis[child] && child==par) continue;
    if(vis[child]) return true;
    is_loop |= dfs(child,vertex);
 }
 return is_loop;
 } 
 
signed main(){
 int n,e;
 cin>>n>>e;
 for(int i=1;i<=e;i++){
    int a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
 }       
 int ans=0;    
 for(int i=1;i<=n;i++){
    if(vis[i]) continue;
    cc.clear();
    dfs(i,0);
vp.push_back(cc);
 }
bool is_loop=0;
for(int i=1;i<=n;i++){
    if(dfs(i,0)){
        is_loop=true;
        break;
    }
}
cout<<is_loop<<endl;
// cout<<vp.size()<<endl;
// for(auto x:vp){
//     for(auto y:x) cout<<y<<" ";
//     cout<<endl;
// }
 } 