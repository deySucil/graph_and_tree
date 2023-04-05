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
const int N=1e5+7;
vector<int>g[N];
int par[N];
void dfs(int v,int p=-1){
par[v]=p;
for(auto child:g[v]){
    if(child==p) continue;
dfs(child,v);
}
}
 vector<int> path(int x){
    vector<int>ans;
    
    int v=x;
    
    while(v!=-1){
ans.push_back(v);
v=par[v];
    }
    reverse(ans.begin(),ans.end());
    return ans;
 }
signed main(){
int n;
cin>>n;
for(int i=0;i<n-1;i++){
    int x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
}              
 dfs(1);
 int a,b;
 cin>>a>>b;
 vector<int>p1=path(a);
 vector<int>p2=path(b);
 int ans1=-1;
 for(int i=0;i<min(p1.size(),p2.size());i++){
    if(p1[i]==p2[i]){
ans1=p1[i];
    }
    else break;
 }
 cout<<ans1<<endl;
 } 