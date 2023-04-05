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
int presum[N]; 
 int val[N];
 void dfs(int v,int p){
presum[v]+=val[v];
for(auto child:g[v]){
    if(child==p) continue;
    dfs(child,v);
    presum[v]+=presum[child];
}
 }
 signed main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    dfs(1,-1);
    int ans=0;
    for(int i=2;i<=n;i++){
int num1=presum[i];
int num2=presum[1]-presum[i];
ans=max(ans,num1*num2);
    }
    cout<<ans<<endl;
 }