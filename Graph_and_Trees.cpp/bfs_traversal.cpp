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
int level[N];
vector<bool>vis(N);
queue<int>q;
void bfs(int vert){
while(!q.empty()){
    int temp=q.front();
    q.pop();
    vis[1]=true;
    for(auto &x:g[temp]){
        if(!vis[x]){
            q.push(x);
            cout<<x<<" ";
            vis[x]=true;
            level[x]=level[temp]+1;
        }
    }
}
}
 
signed main(){
int n;
cin>>n;
// for(int i=1;i<n;i++){
//     int a,b;
//     cin>>a>>b;
//     g[a].push_back(b);
//     g[b].push_back(a);
// }    
// q.push(1);          
//  bfs(1);
//  for(int i=1;i<=n;i++){
//     cout<<i<<": "<<level[i]<<endl;
//  }
string s(3,'a');
cout<<s<<endl;
 } 