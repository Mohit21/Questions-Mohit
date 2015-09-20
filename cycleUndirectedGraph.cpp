#include<iostream>
#include<list>

using namespace std;
list<int> *adj;
int V;
struct graph{
       int v;
       };
       
graph* createGraph(int v){
       graph *Graph=new graph;
       Graph->v=v;       
       V=v;
       adj=new list<int>[v];
       }
void addEdge(int v,int w){
     adj[v].push_back(w);
     adj[w].push_back(v);
     }
bool cyclicUtil(int v,bool visited[],int parent){
     visited[v]=true;
     list<int>::iterator it;
     for(it=adj[v].begin();it!=adj[v].end();it++){
                                                  if(!visited[*it]){
                                                                    if(cyclicUtil(*it,visited,v)){
                                                                                              return true;
                                                                                              }
                                                                    }
                                                  else if(*it!=parent){
                                                       return true;
                                                       }
                                                  }                
      return false;                
     }
bool cyclic(){
     bool *visited=new bool[V];
     for(int i=0;i<V;i++){
             visited[i]=false;
             }
     for(int i=0;i<V;i++){
             if(!visited[i])
                            if(cyclicUtil(i,visited,-1))
                                                        return true;
             }
     return false;        
     }
int main(){
     graph *graph1;
     graph1=createGraph(5);
     addEdge(1,0);
     addEdge(0,2);
     addEdge(2,0);               //comment this to get no cycle
     addEdge(0,3);
     addEdge(3,4);
     if(cyclic()){
                cout<<"\nCycle exists!!";    
                  }
     else{
          cout<<"\nCycle Do Not exist";
          }
     system("pause");
     return 0;
     }
