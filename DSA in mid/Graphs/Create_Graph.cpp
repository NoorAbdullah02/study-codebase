#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Edge{
public:
int src;
int des;
Edge(int s,int d){src = s,des = d;}
};
void create(vector<vector<Edge>> &graph){

graph[0].push_back(Edge(0,2));

graph[1].push_back(Edge(1,2));
graph[1].push_back(Edge(1,3));

graph[2].push_back(Edge(2,0));
graph[2].push_back(Edge(2,1));
graph[2].push_back(Edge(2,3));

graph[3].push_back(Edge(3,1));
graph[3].push_back(Edge(3,2));

}
void bfs(vector<vector<Edge>> &graph,int v,vector<bool>&V,int start){
    queue<int> q;
    
    q.push(start);
    while (!q.empty()){
      int curr = q.front();
      if (V[curr] == 0){
        cout<<curr<<" ";
        V[curr] = 1;
        for (int i=0;i<graph[curr].size();i++){
            Edge e = graph[curr][i];
            q.push(e.des);
        }
      }
      q.pop();
    }
}
void dfs(vector<vector<Edge>> &graphs,int curr,vector<bool> &V){
    cout<<curr<<" ";
    V[curr] = 1;
    for (int i=0;i<graphs[curr].size();i++){
        Edge e = graphs[curr][i];
        if (V[e.des] == 0)
        dfs(graphs,e.des,V);
    }
}
int main ()
{
 int v = 4;
 vector<vector<Edge>> graph(v);
 create(graph);
//  for (int i=0;i<graph[1].size();i++){
//     Edge e = graph[1][i];
//     cout<<e.des<<" ";
//  }
 vector<bool>check(v);
// for (int i=0;i<check.size();i++){
//     if (check[i] == 0){
//      bfs(graph,v,check,i);
//  }
//}
for (int i=0;i<check.size();i++){
    if (check[i] == 0){
     dfs(graph,i,check);
 }
}

return 0;
}