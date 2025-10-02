#include<iostream>
#include<vector>
using namespace std;
class Edge{
    public:
    int src,des,weight;
    Edge(int s,int d, int w){
        src = s;
        des = d;
        weight = w;
    }
};
void create(vector<vector<Edge>> &graph){
 graph[0].push_back(Edge(0,2,2));

 graph[1].push_back(Edge(1,2,10));
 graph[1].push_back(Edge(1,3,0));

 graph[2].push_back(Edge(2,1,10));
 graph[2].push_back(Edge(2,3,0));

 graph[3].push_back(Edge(3,1,0));
 graph[3].push_back(Edge(3,2,-1));
}
int main (){
    int n = 4;
    vector<vector<Edge>> graph(n);
    create(graph);
    int j=0;
    while(j<4){
    for(int i=0;i<graph[j].size();i++){
        Edge e = graph[j][i];
        cout<<e.src<<" "<<e.des<<" "<<e.weight<<endl;
    } 
    j++;
    }
    return 0;
}