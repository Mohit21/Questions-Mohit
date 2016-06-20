#include<iostream>
#include<set>
#define num 1000000007
using namespace std;

int main(){
    int N;
    set<int> s;
    set<int>::iterator it;
    cin>>N;
    int A[N],B[N];
    for(int i=0;i<N;i++){
            cin>>A[i];                   
            }
    for(int i=0;i<N;i++){
            cin>>B[i];                   
            }
    int C[N][N];
    long long sum=0;
    for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                              C[i][j]=(A[i]*B[j])+((i+1)*B[j])+((j+1)*A[i])+(i+1)*(j+1);           
                              sum+=C[i][j];
                    }
            }
    cout<<(sum%num)<<" ";                                                                           //k=1
    sum=0;
    long long k=2;
    while(k<N){
               for(long long i=0;i<N;i++){
                        for(long long j=0;j<N;j++){
                                 for(long long i2=0;i2<N-k-1;i2++){
                                          for(long long j2=0;j2<N-k-1;j2++){
                                                   if(i==N-1&&j==N-1){
                                                                      break;
                                                                      }
                                                   else{
                                                        s.insert(C[i2][j2]);
                                                        }
                                                   }
                                          }
                                          if(i!=N-1&&j!=N-1){
                                                             it=s.end();
                                                             it--;
                                                             sum+=*it;
                                                             s.clear();
                                                             }
                                          else{
                                               break;
                                          }
                                 }
                        }
            cout<<sum%num<<" ";
            k++;
            }
    int max1=C[0][0];
    sum=0;
    for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                              if(max1<C[i][j]){
                                               max1=C[i][j];
                                               }
                              }
            }
    cout<<(max1%num);                                                                           //k=N        
    system("pause");
    return 0;
    }
