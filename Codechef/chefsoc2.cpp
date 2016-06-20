#include<iostream>
#define num 1000000007

using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
               int N,M,s;
               cin>>N>>M>>s;
               int A[M];
               for(int i=0;i<M;i++){
                       cin>>A[i];
                       }
               int D[N][M],L,R;
               for(int i=0;i<N;i++){
                       for(int j=0;j<M;j++){
                               D[i][j]=0;
                               }
                       }
               D[s-1][0]=1;
               for (int i=1;i<=M;i++){
                    for (int j=1;j<=N;j++) {
                    L=j-A[i];
                    R=j+A[i];
                    if (L>0)
                       D[j][i]+= D[L][i-1];
                    if (R<=N)
                       D[j][i]+=D[R][i-1];
                    }
                    }
               for(int i=1;i<=N;i++){
                       cout<<D[i][M]%num<<" ";
                       }                                
               cout<<endl;
               }
    system("pause");
    return 0;
    }
