// class Solution {
// public:
// int dijkstra(vector<pair<int,int>>g[],vector<int>&dist,int n,int k){
// set<pair<int,int>>st;
// int inf=1e9+7;
// dist[k]=0;
// st.insert({0,k});
// while(!st.empty()){
//     auto temp=*st.begin();
//     st.erase(st.begin());
//     int vert=temp.second;
//     int wt=temp.first;
//     for(auto child:g[vert]){
//         int child_v=child.first;
//         int child_w=child.second;
//         if(wt+child_w < dist[child_v]){
//             dist[child_v]=wt+child_w;
// st.insert({dist[child_v],child_v});
//         }
//     }
//     }
//     int mx=-1;
//     for(int i=1;i<=n;i++){
//         if(dist[i]==inf) return -1;
// mx=max(mx,dist[i]);
//     }
// return mx;

// }
//     int networkDelayTime(vector<vector<int>>& times, int n, int k) {
//       vector<pair<int,int>>g[n+1];
//       int inf=1e9+7;
//       vector<int>dist(n+1,inf) ;
//       for(auto &x:times){
//           g[x[0]].push_back({x[1],x[2]});
//       }
//      int ans= dijkstra(g,dist,n,k);
//      return ans;
//     }
// };