#include<iostream>
#define num 1000000007
 
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--){
            long long N,K,facN,facK,ans,diffNK,diffNK1,K1,ans1;
            cin>>N>>K;
            signed long long A[N];
            facN=1;
            facK=1;
            diffNK1=1;
            ans1=0;
            for(long long i=0;i<N;i++){
                     cin>>A[i];
                     facN=((facN%num)*(i+1))%num;
                     } 
             if(N==1){
                 cout<<1;
                 }
            else{
            if(K%2==0){
                       for(K;K>=0;K-=2){
                               diffNK=N-K;
                               if(K==0){
                                        facK=1;
                                        }
                               else{
                                    for(long long i=1;i<=K;i++){
                                                 facK=((facK%num)*i)%num;
                                                 }
                               }
                               for(long long i=1;i<=diffNK;i++){
                                        diffNK1=((diffNK1%num)*i)%num;
                                        }
                               facK=(facK*diffNK1)%num;         
                               ans=((facN)/(facK));
                               ans1=((ans1%num)+(ans%num)); 
                               //K=K-2;
                              }
                       cout<<ans1%num;
                       }
            else{
                 for(K;K>=0;K-=2){
                         diffNK=N-K;
                         if(K==0){
                                        facK=1;
                                        }
                               else{
                                    for(long long i=1;i<=K;i++){
                                                 facK=((facK%num)*i)%num;
                                                 }
                               }
                         for(long long i=1;i<=diffNK;i++){
                                      diffNK1=((diffNK1)*i)%num;
                                      }
                         facK=(facK*diffNK1)%num;         
                         ans=((facN)/(facK));
                         ans1=((ans1%num)+(ans%num)); 
                         //K=K-2;
                         }     
                 cout<<ans1%num;
                 }
            }     
            cout<<endl;
            }
    system("pause");
    return 0;
    }
