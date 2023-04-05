#include <bits/stdc++.h>
//Sucil_Dey
//Department of Information Technology
// J.G.E.C

/*Multisource bfs is completely similar to normal bfs, here we only need to store all the sources in the queue initially and initialize the levels of all the sources to zero*/
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
const int INF=1e9+20;
vector<int>source;
 vector<int>g[N];
 vector<bool>visit(N);
 vector<int>level(N,INF);
 int n,m,p;
 void bfs(){
queue<int>q;
for(auto x:source){
    q.push(x);
    level[x]=0;
}
while(!q.empty()){
    int temp=q.front();
q.pop();
for(auto child:g[temp]){
    if(visit[child]) continue;
    level[child]=level[temp]+1;
    visit[child]=1;
}
}
 }
signed main(){
 cin>>n>>m>>p;
while(m--){
    int x,y;
    cin>>x>>y;
    g[x].push_back(y);
}
while(p--){
    int z;
    cin>>z;
    source.push_back(z);
} 
 } 