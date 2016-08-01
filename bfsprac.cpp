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
     
void bfs(int s){
     bool visited[V];
     for(int i=0;i<V;i++){
             visited[i]=false;
             }
     list<int> q;
     list<int>::iterator it;        
     visited[s]=true;
     q.push_back(s);
     while(!q.empty()){
                        s=q.front();
                        q.pop_front();
                        cout<<s<<"-->";
                        for(it=adj[s].begin();it!=adj[s].end();it++){
                                                 if(!visited[*it]){
                                                                   visited[*it]=true;
                                                                   q.push_back(*it);
                                                                   }
                        }
    }    
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
    bfs(0);
    system("pause");
    return 0;
    
    }
