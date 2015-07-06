#include<iostream>
#include<list>

using namespace std;
int V;
list<int> *adj;
struct graph{
       int v;
       };
       
graph* createGraph(int v){
       graph *Graph=new graph;
       Graph->v=v;
       V=v;
       adj=new list<int>[v];
       return Graph;
       }

void addEdge(int v,int w){
     adj[v].push_back(w);
     }
     
void bfs(int a){
     bool *visited=new bool[V];
     for(int i=0;i<V;i++){
             visited[i]=false;
             }
     list<int> queue;
     visited[a]=true;
     queue.push_back(a);
     list<int>::iterator it;
     while(!queue.empty()){
                           a=queue.front();
                           //cout<<queue.front()<<" ";
                           cout<<a<<" ";
                           queue.pop_front();
                           for(it=adj[a].begin();it!=adj[a].end();++it){
                                                                        if(!visited[*it]){
                                                                                          visited[*it]=true;
                                                                                          queue.push_back(*it);
                                                                                          }
                                                                        }
                           }
     }
     
int main(){
    int v;
    cout<<"\nEnter the number vertices:";
    cin>>v;
    cout<<"\nYou have entered:"<<v;
    graph *Graph=createGraph(v);
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,2);
    addEdge(2,0);
    addEdge(2,3);
    
    addEdge(3,1);
    addEdge(3,2);
    addEdge(3,3);
    addEdge(3,0);
    addEdge(3,4);
    addEdge(4,1);
    addEdge(4,2);
    cout<<"\nEnter the vertex for bfs:";
    cin>>v;
    cout<<"\nBFS:"<<endl;
    bfs(v);   
    system("pause");
    return 0;
    }
