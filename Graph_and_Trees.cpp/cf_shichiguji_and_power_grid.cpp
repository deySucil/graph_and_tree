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
int parent[N]
int sz[N];
void make(int v){
parent[v]=v;
sz[v]=1;
 }
int Find(int v){
if(parent[v]==v) return v;
//Path Compression
return parent[v]=Find(parent[v]);
 }
void Union(int a,int b){
a=Find(a);
b=Find(b)
if(a!=b){
if(sz[a]<sz[b]) swap(a,b);
parent[b]=a;
 }
/*Union by rank or sz */
sz[a]+=sz[b];
 }
signed main(){
 int n;
 cin>>n;
 vector<pair<int,int>>cities(n+1);
 for(int i=1;i<=n;i++) {
    cin>>cities[i].first>>cities[i].second;
 }             
 vector<int>c(n+1),k(n+1);
 for(int i=1;i<=n;i++) cin>>c[i];
 for(int i=1;i<=n;i++) cin>>k[i];
 vector<pair<int,pair<int,int>>>edges;
 for(int i=1;i<=n;i++){
edges.push_back({c[i],{i,0}});
 }
 for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        int dis=abs(cities[i].first - cities[j].first) + abs(cities[i].second- cities[j].second);
        int wt=1ll*dis*(k[i]+k[j]);
        edges.push_back({wt,{i,j}});
    }
 }
 int total=0;
 for(int i=0;i<=n;i++) make(i);
 sort(edges.begin(),edges.end());
 vector<int>stations;
 vector<pair<int,int>>connections;
 for(auto x:edges){
    int wt=x.first;
    int u=x.second.first;
    int v=x.second.second;
    if(Find(u)==Find(v)) continue;
    total+=wt;
    Union(u,v);
    if(u==0 || v==0){
        stations.push_back(max(u,v));
        continue;
    }
connections.push_back({u,v});
 }
 cout<<total<<endl;
cout<<stations.size()<<endl;
for(auto station:stations){
    cout<<station<<" ";
}
cout<<endl;
cout<<connections.size()<<endl;
for(auto x:connections){
    cout<<x.first<<" "<<x.second<<endl;
}
 } 