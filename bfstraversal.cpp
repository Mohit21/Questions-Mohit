#include<iostream>
#include<list>
#include<queue>
#include<cstring>
#include<string.h>

using namespace std;

list<int> *adj;       
struct Graph{
       int V;
       };

Graph * createGraph(int V){
      Graph * graph=new Graph;
      graph->V=V;
      adj=new list<int>[V];
      return graph;
      }

void addEdge(int v,int w){
     adj[v].push_back(w);
     }
     
void bfs(int s,Graph *graph){
     int v=graph->V;
     bool visited[v];
     for(int i=0;i<v;i++){
             visited[i]=false;
             }
    // memset(visited,false,count(visited));
     visited[s]=true;
     list<int> q;
     list<int>::iterator it;
     q.push_back(s); 
     while(!q.empty()){
                       s=q.front();
                       cout<<s<<" ";
                       q.pop_front();
                       for(it=adj[s].begin();it!=adj[s].end();it++){
                                                                    if(!visited[*it]){
                                                                                      visited[*it]=true;
                                                                                      q.push_back(*it);
                                                                         }
                                                                    }
                       }   
     }

int main(){
    //Vertices are 4
    int V=4;
    Graph *graph1=createGraph(V);
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(2, 0);
    addEdge(2, 3);
    addEdge(3, 3);
    cout<<"The BFS {ath is as follows:\n";
    bfs(2,graph1);
    cout<<endl;
    system("pause");
    return 0;
    }
