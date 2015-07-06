#include<iostream>

using namespace std;

struct adjListNode{
       int dest;
       adjListNode *next;
       };

struct adjList{
       adjListNode *head;
       };

struct graph{
       int v;
       adjList *array;
       };

adjListNode* newALN(int dest){
             adjListNode *newnode=new adjListNode;
             newnode->dest=dest;
             newnode->next=NULL;
             return newnode;
             }

graph* createGraph(int V){
       graph *Graph=new graph;
       Graph->v=V;
       Graph->array=(struct adjList*)malloc(V*sizeof(struct adjList));
       for(int i=0;i<Graph->v;i++){
               Graph->array[i].head=NULL;
               }
       return Graph;
       }
       
void addEdge(graph *graph1,int src,int dest){
    
     adjListNode *newNode=newALN(dest);
     newNode->next=graph1->array[src].head;
     graph1->array[src].head=newNode;
    
     newNode=newALN(src);
     newNode->next=graph1->array[dest].head;
     graph1->array[dest].head=newNode;
     }
     
void printGraph(graph* Graph){
     for(int i=0;i<Graph->v;i++){
           adjListNode *ptr=Graph->array[i].head;
           cout<<"\nV="<<i<<endl;
           while(ptr){
                      cout<<"-->"<<ptr->dest;
                      ptr=ptr->next;
                      }
             }
     }
     
int main(){
    int v;
    cout<<"\nEnter the number of Vertices:";
    cin>>v;
    cout<<"\nYou have entered:"<<v;
    graph *Graph=createGraph(v);
    addEdge(Graph,0,1);
    addEdge(Graph,0,4);
    addEdge(Graph,1,2);
    addEdge(Graph,1,3);
    addEdge(Graph,1,4);
    addEdge(Graph,2,3);
    addEdge(Graph,2,5);
    addEdge(Graph,3,5);
    addEdge(Graph,3,4);
    addEdge(Graph,5,1);
    printGraph(Graph);
    system("pause");
    return 0;
    }
