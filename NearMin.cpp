#include<iostream>
#define max 50
using namespace std;

int main(){
    int n,A[max],ans[max],k=0,j,l=0,m=0,flag=0;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>A[i];
            }
    for(int i=0;i<n;i++){
            j=0;
            flag=0;
            while(j<i){
                         if(A[j]<A[i]){
                                       flag=1;
                                       l=A[j];
                              }           
                         j++;
                         }
            if(flag==1){
                        ans[k]=l;
                        k++;
                        }
            else {
                 
                        ans[k]=-1;
                        k++;
                 }
            }
            
            cout<<"\n";
    while(m<k){
              cout<<ans[m]<<endl;
              m++;
              }
    system("pause");
    return 0;
    }

