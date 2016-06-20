#include<iostream>
#include<cstdio>
#include<cstring>
#define num 1000000007

using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
               int N,M,s;
               cin>>N>>M>>s;
               int A[M+1];
               for(int i=1;i<=M;i++){
                       cin>>A[i];
                       }
               int D[N+1][M+1],L,R;
               memset(D,0,sizeof(D[0][0])*(N+1)*(M+1));
               D[s][0]=1;
               for (int i=1;i<=M;i++){
                    for (int j=1;j<=N;j++) {
                        L=j-A[i];
                        R=j+A[i];
                        if (L>0)
                           D[j][i]+=(D[L][i-1]%num);
                        if (R<=N)
                           D[j][i]+=(D[R][i-1]%num);
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

/*
// base condition 
 dp[s][0] = 1;
   
for i = 1 to m {
for j = 1 to n {
L = j - a[ i ]
R = j + a[ i ]
if L > 0
dp[ j ] [ i ] += dp [ L ] [ i - 1] ;
if R <= n
dp [ j ] [ i ] += dp [ R ] [ i - 1];
for i = 1 to n {
 print dp [ i ] [ m ]
}*/

/*
// base condition 
 dp[s][0] = 1;
   
for i = 1 to m {
for j = 1 to n {
L = i - a[i-1]
R = i + a[ i ]
if L > 0
dp[ j ] [ i ] += dp [ L ] [ i - 1] ;
if R <= n
dp [ j ] [ i ] += dp [ R ] [ i - 1];
for i = 1 to n {
 print dp [ i ] [ m ]
}
*/
