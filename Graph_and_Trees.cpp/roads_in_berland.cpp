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
void solv(){
 int n;
 cin>>n;
 int dp[n+1][n+1];
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++) cin>>dp[i][j];
 }
 int k; cin>>k;
 vector<vector<int>>v;
 int p=k;
 while(k--){
    int x,y,wt;
    cin>>x>>y>>wt;
    v.push_back({x,y,wt});
 }
//  for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++) cout<<dp[i][j];
//  }
// cout<<v[0][2];
 vector<int>ans;
 for(int z=1;z<=n;z++){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) dp[i][j]=min(dp[i][j],dp[i][z]+dp[z][j]);
    }
    }
 int prev=-1;
 for(int l=0;l<p;l++){
  int x=v[l][0];
  int y=v[l][1];
  int wt=v[l][2];
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        dp[i][j]=min(dp[i][j],dp[i][x]+wt+dp[y][j]);
        dp[i][j]=min(dp[i][j],dp[i][y]+wt+dp[x][j]);
    }
  }
  int sum=0;
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        sum+=dp[i][j];
    }
  } 
  ans.push_back(sum); 
 }
 for(auto it:ans) cout<<it<<" ";
//  cout<<endl;
// cout<<dp[1][2];
 } 
 
signed main(){
 solv();             
 
 } 