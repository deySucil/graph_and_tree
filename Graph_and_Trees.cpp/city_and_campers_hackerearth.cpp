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
int sz[N];
multiset<int>st;
void make(int v){
parent[v]=v;
sz[v]=1;
st.insert(1);
 }
 void merge(int a,int b){
        st.erase(st.find(sz[a]));
    st.erase(st.find(sz[b]));  
   
   
 }
int Find(int v){
if(parent[v]==v) return v;
//Path Compression
return parent[v]=Find(parent[v]);
 }
void Union(int a,int b){
a=Find(a);
b=Find(b);
if(a!=b)
if(sz[a]<sz[b]) swap(a,b);
parent[b]=a;
merge(a,b);
//  st.insert(sz[a]+sz[b]);
/*Union by rank or sz */
sz[a]+=sz[b];
 }
 
signed main(){
 int n,q;
 cin>>n>>q;
 for(int i=1;i<=n;i++) make(i);
//  cout<<q<<endl;
 while(q--){
    int x,y;
    cin>>x>>y;
    
    Union(x,y);
    int p=max(sz[x],sz[y]);
    st.insert(p);
    if(st.size()==1) cout<<0<<endl;
    else
    {
        int mx=*(--st.end());
    int mn=*st.begin();
cout<<mx-mn<<endl;
    }
// cout<<1<<endl;
 }             
 
 } 