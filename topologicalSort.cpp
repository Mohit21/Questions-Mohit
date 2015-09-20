#include<iostream>
#include<list>
#include<stack>
#define V 6
using namespace std;
list<int> *adj;
struct graph{
       int v;
       };

void createGraph(int v){
       graph* Graph=new graph;
       Graph->v=v;
       adj=new list<int>[v];
       //return Graph;
       }

void addEdge(int v,int w){
     adj[v].push_back(w);
     }
     
void topologicalSortUtil(int v,bool visited[],stack<int> &Stack){
     visited[v]=true;
     list<int>::iterator it;
     for(it=adj[v].begin();it!=adj[v].end();it++)
                                                if(!visited[*it])
                                                                  topologicalSortUtil(*it,visited,Stack);
     Stack.push(v);
     }
     
void topologicalSort(){
     bool *visited=new bool[V];
     stack<int> Stack;
     for(int i=0;i<V;i++){
             visited[i]=false;
             }
     for(int i=0;i<V;i++)
             if(visited[i]==false)
                                  topologicalSortUtil(i,visited,Stack);
     while(Stack.empty()==false){
                           cout<<Stack.top()<<"   ";
                           Stack.pop();
                           }
     } 

int main(){
    createGraph(V);
    addEdge(5,2);
    addEdge(5,0);
    addEdge(4,0);
    addEdge(4,1);
    addEdge(2,3);
    addEdge(3,1);
    cout<<"The topological Sort is:"<<endl;
    topologicalSort(); 
    system("pause");
    return 0;
    }
