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
const int N=1e3+7;
const int inf=1e11;
int dp[N][N];
void reset(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j) dp[i][j]=0;
            else dp[i][j]=inf;
        }
    }
}
signed main(){
 reset();
 int n,m;
 cin>>n>>m;
 for(int i=0;i<m;i++){
    int x,y,wt;
    cin>>x>>y>>wt;
    dp[x][y]=wt;
 }                
 for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
        }
    }
 }
 for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
    if(dp[i][j]==inf) cout<<'I'<<" ";
    else cout<<dp[i][j]<<" ";
}
cout<<endl;
 }
 } 