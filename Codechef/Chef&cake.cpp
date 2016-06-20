#include<iostream>

using namespace std;

int main(){
    int T,N,M,count,A[10000],k,i;
    cin>>T;
    while(T--){
             cin>>N;
             cin>>M; 
             count=1;
             k=0;
             for(i=0;i<N;i++){
                     A[i]=0;
                     }
             for(i=0;i<N;i++){
                     A[M]=1;
                     k=M;
                     if(M+k<N){
                               if(A[M+k]==1){
                                             break;
                                             }
                               else{
                                    A[M+k]=1;
                                    M=
                                    count++;
                                    }
                               }
                     else{
                          k=(M+k)-N;
                          if(A[k]==1){
                                      break;
                                      }
                          else{
                               A[k]=1;
                               count++;
                               }
                          }
                     }
                     if(i==N-1){
                                cout<<"YES"<<"\n";
                                }
                     else{
                          cout<<"NO"<<" "<<count<<"\n";
                          }
               }
    system("pause");
    return 0;
    }
