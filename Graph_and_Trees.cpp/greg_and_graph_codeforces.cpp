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
 vector<int>del(n);
 read(del,n);
 reverse(del.begin(),del.end());
 vector<int>ans;
 for(int k=0;k<n;k++){
    int v=del[k];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) dp[i][j]=min(dp[i][j],dp[i][v]+dp[v][j]);
    }
    int sum=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            sum+=dp[del[i]][del[j]];
        }
    }
    ans.push_back(sum);
 }
 reverse(ans.begin(),ans.end());
 for(auto x:ans) cout<<x<<" ";
 cout<<endl;
 } 
 
signed main(){
solv();             
 
 } 