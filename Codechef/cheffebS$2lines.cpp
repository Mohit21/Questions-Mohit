#include<iostream>
using namespace std;


int main(){
    int T,N,M;
    cin>>T;
    while(T--){
            cin>>N>>M;
            long long A[N][M];
            for(long long i=0;i<N;i++){
                     for(int j=0;j<M;j++){
                             cin>>A[i][j];
                             }
                     }
    long long  max=0;
    for(long long i1=0;i1<N;i1++){
                  for(long long j1=0;j1<M;j1++){
                             long long key=A[i1][j1],counter=0;
                                 for(long long j=0;j<M;j++){
                                          if(key==A[i1][j]){
                                                            counter++;          
                                                            }
                                          }
                                 for(long long i=0;i<N;i++){
                                          if(key==A[i][j1]){
                                                            counter++;          
                                                            }
                                          }
                                 counter-=1;         
                                 if(max<=counter){
                                 max=counter;
                                 } 
                      }
             }
    cout<<max;        
    }
    system("pause");
    return 0;
    }
