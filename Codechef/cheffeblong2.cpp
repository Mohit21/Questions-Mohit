#include<iostream>
#define num 1000000007

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
               long long N,x,M,n1;
               cin>>N>>x>>M;
               int A[N];
               for(long long i=0;i<N;i++){
                       cin>>A[i];
                       }
               if(x==1){
                        cout<<A[0]%num;
                        }
               else if(x==2){
                             A[x-1]+=M*A[0];
                             cout<<A[x-1]%num;
                    }
               else if(x>2){
                    if(M==1){
                             int sum=0;
                             for(long long i=0;i<=x-1;i++){
                                      sum+=A[i];
                                      }          
                             cout<<sum%num;
                             }
                    else{
                         M-=1;
                         while(M--){
                                    for(long long  i=1;i<=x-1;i++){
                                     A[i]=A[i]+A[i-1];          
                                    }
                         }
                             int sum=0;
                             for(long long i=0;i<=x-1;i++){
                                      sum+=A[i];
                                      }          
                             cout<<sum%num;
                    }
               }
            }
    system("pause");
    return 0;
    }
