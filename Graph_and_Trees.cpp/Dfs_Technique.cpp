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
const int N=1e8+1;
vector<int>g[N];
bool visit[N];
 
 void dfs(int vertex){
       /*This section is 
     after entering the 
    vertex   
    
    
    */

    if(visit[vertex]) return;
    // cout<<vertex<<endl;

visit[vertex]=true;
for(auto x:g[vertex]){
    /*This section is before calling the child*/
    // if(visit[x]) continue;
    dfs(x);
    /*This section is after
     exiting the child*/
}
/*This section is after exiting the vertex*/
 }
signed main(){
 int n;
 cin>>n;
 int p=0;
while(n--){
    int a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);

}
 dfs(p);
 } 