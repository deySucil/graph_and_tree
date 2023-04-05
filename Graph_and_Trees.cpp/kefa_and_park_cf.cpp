#include <bits/stdc++.h>
//Sucil_Dey
//Department of Information Technology
// J.G.E.C
#define f float
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
#define vec vector<int>
using namespace std;
const int N=100005;
int a[N];
vector<int> vp[N];
bool visit[N];
int cnt=0;
int m=0;

void dfs(int vert){
    // cout<<vert<<endl;
   
    
 if(a[vert-1]==1 ) cnt++;
 else cnt=0;
 if( cnt>m) return;  
//  cout<<vert<<endl;
 visit[vert]=true;
 for(auto x:vp[vert]){
    if(vert==1 && a[0]==1) cnt=1;
    else if(vert==1) cnt=0;
    if(visit[x]) continue;
    dfs(x);
 } 
 } 
 
signed main(){
int n;
cin>>n>>m;
// cout<<m;
read(a,n);
// cout<<a[0];
for(int i=1;i<n;i++){
    int c,d;
    cin>>c>>d;
  vp[c].push_back(d);
  vp[d].push_back(c);
}
// if(a[0]==1) cnt=1;
int vert=1;
 dfs(vert);
 int ans=0;
 for(int i=1;i<=n;i++){
    if(visit[i]==true && vp[i].size()==1 && i!=1) ans++;
 }
//  cout<<visit[4];
 cout<<ans<<endl;
 return 0;
 } 