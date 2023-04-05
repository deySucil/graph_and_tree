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
int parent[N];
int size[N];
void make(int v){
parent[v]=v;
size[v]=1;
}
 
int Find(int v){
if(parent[v]==v) return v;
//Path Compression
return parent[v]=Find(parent[v]);
} 

void Union(int a,int b){
a=Find(a);
b=Find(b);
if(a!=b){
    if(size[a]<size[b]) swap(a,b);
    parent[b]=a;
}
/*Union by rank or size */
size[a]+=size[b];
}
signed main(){
int n,k;
cin>>n>>k;
for (int i = 1; i <=n; i++)
{
    make(i);
}
 while(k--){
    int u,v;
    cin>>u>>v;
    Union(u,v);
 }             
 int connected_comp=0;
 for(int i=1;i<=n;i++){
    if(Find(i)==i) connected_comp++;
 }
 cout<<connected_comp<<endl;
 } 