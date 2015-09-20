#include<iostream>

using namespace std;

int main(){
    int A[]={1, 3, 4, 2, 0, 5},m,min,smax,max,smin,proc1,proc2;
    m=sizeof(A)/sizeof(A[0]);
    min=A[0];
    for(int i=0;i<m;i++){     
            if(A[i]<=min){
                         smin=min;
                         min=A[i];
                         }
            }
    max=A[0];
    for(int i=0;i<m;i++){
            if(A[i]>=max){
                         smax=max;
                         max=A[i];
                         }
            }
    if(max>min){
                cout<<"\nPair="<<smax<<"-->"<<max;
                cout<<"\n-->"<<max*smax;
                }
    else{
         cout<<"\nPair="<<smin<<"-->"<<min;
         cout<<"\n-->"<<smin*min;
                
         }
    system("pause");
    return 0;
    }
