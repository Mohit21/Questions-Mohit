#include<iostream>
using namespace std;
 
int maxVal(int x, int y){ 
 int max;
 if(x>y){
         max=x;
         }
 else{
      max=y;
      }
 return max;
 }
 
int getMaxPath(int A[], int m,int B[], int n){
    int i = 0, j = 0;
    int  maxpath = 0, sum1 = 0, sum2 = 0;
    //Merge sort approach
    while (i < m && j < n)
    {
        if (A[i]<B[j]){
            sum1+=A[i++];
            }
        else if (A[i]>B[j]){
            sum2+=B[j++];
            }
        else{                                 //common intersection point
            maxpath+=maxVal(sum1,sum2);
            sum1 = 0, sum2 = 0;
    while (i < m && j < n && A[i]==B[j]){
                maxpath+=A[i++];
                j++;
            }
        }
    }
    while (i < m){
        sum1+=A[i++];
        }
    while (j < n){
        sum2+=B[j++];
        }
    maxpath+=  maxVal(sum1, sum2);
    return maxpath;
}

int main()
{
    int T,M,N;
    cin>>T;
    while(T--){
               cin>>M;
               cin>>N;
               int A1[M],A2[N];
               for(int i=0;i<M;i++){
                       cin>>A1[i];
                       }     
               for(int i=0;i<N;i++){
                       cin>>A2[i];
                       }
               int maxPathSum=getMaxPath(A1,M,A2,N);
               cout<<maxPathSum<<endl; 
               }
    system("pause");
    return 0;
}
