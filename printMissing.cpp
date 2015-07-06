#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    int A[]={88, 105, 3, 2, 200, 0, 10},n,k=0,min,min1,p1;
    n=sizeof(A)/sizeof(A[0]);
    int B[100];
    for(int i=0;i<100;i++){
            B[i]=0;
            }
    for(int i=0;i<n;i++){
            if(A[i]<100){
                         B[A[i]]=1;
                         }
            }
    for(int i=0;i<100;i++){
            k=0;
            if(B[i]==0){
                        if(k==0){
                                 cout<<i<<"-";
                                 }
                        k++;
                        }
            else{
                 if(k==0){
                          cout<<i-1<<endl;         
                          }
                          k++;                 
                 }
            }
    system("pause");
    return 0;
    }
