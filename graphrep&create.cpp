#include<iostream>
#include<algorithm>

using namespace std;

struct AdjListNode{
       int dest;
       AdjListNode *next;
       };
       
struct AdjList{
       AdjListNode *head;
       };
       
struct Graph{
       int V;
       AdjList *array;
       };

AdjListNode* newAdjNode(int dest){
            AdjListNode *newNode=new AdjListNode;
            newNode->dest=dest;
            newNode->next=NULL;
            return newNode;
            }

Graph* createGraph(int V){
       Graph *graph1=new Graph;
       graph1->V=V;
       graph1->array=(AdjList*)malloc(V*sizeof(AdjList));
       //graph1->array=new (AdjList);       
       for(int i=0;i<V;i++){
               graph1->array[i].head=NULL;
               }
       return graph1;
       }

void addEdge(Graph* graph1,int src,int dest){
     AdjListNode* newnode=newAdjNode(dest);
     newnode->next=graph1->array[src].head;
     graph1->array[src].head=newnode;
     
     newnode=newAdjNode(src);
     newnode->next=graph1->array[dest].head;
     graph1->array[dest].head=newnode;
     }
     
void display(Graph *graph1){
     cout<<"\nThe Adjacencey List is:\n";
     for(int i=0;i<graph1->V;i++){
             AdjListNode *trav=graph1->array[i].head;
             while(trav!=NULL){
                     cout<<"-->"<<trav->dest;
                     trav=trav->next;
                     }
             cout<<endl;
             }
     }
     
int main(){
    cout<<"\nThe number of Vertices:5\n";
    Graph *graph=createGraph(5);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    addEdge(graph, 4, 2);
    //addEdge(graph, 4, 1);
    display(graph);
    system("pause");
    return 0;
    }
