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
vector<int>g[N];
bool vis[N];
int sum=0ll;
vector<int>depth(N);
vector<int>height(N);
void dfs(int vertex,int par){
for(auto child:g[vertex]){
    if(child==par) continue;
depth[child]=depth[vertex]+1;
dfs(child,vertex);
height[vertex]=max(height[vertex],height[child]+1);
}
} 
void dfs2(int vertex,int &sum){
sum+=vertex;
vis[vertex]=true;
for(auto child:g[vertex]){
    if(vis[child]) continue;
    dfs2(child,sum);
}
}
signed main(){
 int n;
 cin>>n;
 int p;
 cin>>p;
 for(int i=1;i<=n;i++){
    int a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
 }             
//  dfs(1,0);
 
 dfs2(p,sum);
 cout<<sum<<endl;

//  for(int i=1;i<=n;i++){
//     cout<<depth[i]<<" "<<height[i]<<endl;

//  }
 } 