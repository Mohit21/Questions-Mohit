#include<iostream>
#include<limits>

using namespace std;
#define v 9

int minDistance(int dist[],bool sP[]){
    int minD=INT_MAX,minIndex;
    for(int i=0;i<v;i++){
            if(sP[i]==false&&dist[i]<=minD){
                              minD=dist[i];
                              minIndex=i;
                             }
            }
    return minIndex;
    }
    
void printDistance(int dist[],int V){
     cout<<"\nVertex  Distance from Source"<<endl<<endl;
     for(int i=0;i<V;i++){
             cout<<i<<"\t"<<dist[i]<<endl;
             }
     }
void dijkstraPath(int graph[v][v],int src){
     //defining distance array and shortest path array!!
     int dist[v];                          
     bool sP[v];
     //instializing the values to be infinite and false for dist and sP array respectively
     for(int i=0;i<v;i++){
             dist[i]=INT_MAX;
             sP[i]=false;
             }
     //src vertex has distance zero
     dist[src]=0;
     for(int i=1;i<v;i++){
             int u=minDistance(dist,sP);                //gives min distance vertex
             sP[u]=true;
             for(int j=0;j<v;j++){
                     if(!sP[j]&&graph[u][j]&&dist[u]!=INT_MAX&&dist[u]+graph[u][j]<dist[j]){
                                                                                dist[j]=dist[u]+graph[u][j];
                                                                                }
                     }
             }
     printDistance(dist,v);
     }
     
int main(){
    int graph[v][v]={{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 0, 10, 0, 2, 0, 0},
                      {0, 0, 0, 14, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     },i;
    cout<<"\nEnter the source vertex(0-8):";
    cin>>i;
    //i==0
    dijkstraPath(graph,i);  
    system("pause");
    return 0;
    }
