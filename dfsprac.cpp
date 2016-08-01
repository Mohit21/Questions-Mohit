#include<iostream>
#include<list>

using namespace std;
list<int> *adj;
struct Graph{
       int v;
       };
int V;       
Graph *createGraph(int v){
     Graph* graph=new Graph;
     graph->v=v;
     V=v;
     adj=new list<int>[v];
     return graph;
     }
       
void addEdge(int s,int d){
     adj[s].push_back(d);
     }
     
void dfsUtil(bool visited[],int s){
     visited[s]=true;
     cout<<s<<"-->";
    list<int>::iterator it;
    for(it=adj[s].begin();it!=adj[s].end();it++){
                                                 if(!visited[*it]){
                                                                   dfsUtil(visited,*it);
                                                                   }
                                                 }
    }    

void dfs(int s){
    bool visited[V];
    for(int i=0;i<V;i++){
            visited[i]=false;
            }
    dfsUtil(visited,s);
    }
    
int main(){
    int v;
    v=6;
    Graph *graph;
    graph=createGraph(v);
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,2);
    addEdge(2,3);
    addEdge(3,4);
    addEdge(2,4);
    addEdge(4,5);
    dfs(2);
    system("pause");
    return 0;
    
    }
