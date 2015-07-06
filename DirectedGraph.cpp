#include<iostream>
#include<list>

using namespace std;
int V;
list<int> *adj;
struct graph{
       int v;
       };
       
graph* createGraph(int v){
       graph* Graph=new graph;
       Graph->v=v;
       V=v;
       adj=new list<int>[v];
       return Graph;
       }
       
void addEdge(int v,int w){
     adj[v].push_back(w);
     }

bool isCyclic1(int v,bool visited[],bool recFunc[]){
     if(visited[v]==false){
                           visited[v]=true;
                           recFunc[v]=true;
                           list<int>::iterator it;
                           for(it=adj[v].begin();it!=adj[v].end();it++){
                                                                        if(!visited[*it]&&isCyclic1(*it,visited,recFunc))
                                                                                                                         return true;
                                                                        else if(recFunc[*it])
                                                                             return true;
                                                                        }                                       
                           }
     recFunc[v]=false;
     return false;
     }
bool isCyclic(){
     bool *visited=new bool[V];
     bool *recFunc=new bool[V];
     for(int i=0;i<V;i++){
             visited[i]=false;
             recFunc[i]=false;
             }
     for(int i=0;i<V;i++)
             if(isCyclic1(i,visited,recFunc))
                                              return true;
             return false;
     }

int main(){
    int v;
    cout<<"\nEnter the number of vertices:";
    cin>>v;
    cout<<"\nThe number of vertices:"<<v;
    graph *graph1=createGraph(v);
    addEdge(0,1);
    //addEdge(0,2);
    addEdge(1,2);
    //addEdge(1,3);
    //addEdge(2,0);
    addEdge(2,3);
    //addEdge(3,3);
    //addEdge(3,4);
    //addEdge(4,1);
    //addEdge(4,2);
    if(isCyclic()){
                  cout<<"\nCycle Exists";
                  }
    else{
         cout<<"\nNo Cycle found";
         }
    system("pause");
    return 0;
    }
