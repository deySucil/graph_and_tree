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
 cin>>n; string s;
 cin>>s;
 if(n%3==2){
   cout<<"NO"<<endl;
   return;
 }
 for(int i=0;3*i<n-2;i++){
if(s[3*i+1]!=s[3*i+2]){
   cout<<"NO"<<endl;
   return;
}
 }
 cout<<"YES"<<endl;
 } 
 
signed main(){
   fast;
 test(T){
    solv();
 }             
 
 } 