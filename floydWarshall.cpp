#include<iostream>
#include<limits>
#define V 4
#define INF 99

using namespace std;

void print(int dist[][V]){
     for(int i=0;i<V;i++){
             cout<<endl;
             for(int j=0;j<V;j++){
                     cout<<"  "<<dist[i][j];
                     }
             }
     }
void floydWarshall(int Graph[V][V]){
     int dist[V][V];
     for(int i=0;i<V;i++){
             for(int j=0;j<V;j++){
                     dist[i][j]=Graph[i][j];
                     }
             }
     for(int k=0;k<V;k++){
             for(int i=0;i<V;i++){
                     for(int j=0;j<V;j++){
                             if(dist[i][k]+dist[k][j]<dist[i][j]){
                                                                  dist[i][j]=dist[i][k]+dist[k][j];
                                                                  }
                             }
                     }
             }
     print(dist);
     }



int main(){
    int Graph[V][V]={ {0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0}
                      };
    floydWarshall(Graph);
    cout<<endl;
    system("pause");
    return 0;
    }
