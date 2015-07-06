#include<iostream>

using namespace std;

int main(){
    int A[]={2,8,-1,-1,-1,13,-1,15,20},B[]={5, 7, 9, 25},m,n,j,k,a;
    m=sizeof(A)/sizeof(A[0]);
    n=sizeof(B)/sizeof(B[0]);
    for(int i=0;i<m;i++){
            k=0;
            j=i+1;
            if(A[i]==-1){
                         while(j<m){
                                           if(k==0){
                                           a=A[j+1];
                                           A[j+1]=A[i];
                                           A[i]=a;
                                           }
                                           else
                                           break;
                                     j++;
                                     }           
                         }            
            }
    k=-1;
    /*for(int i=0;i<m;i++){
            k++;
            a=i;
            if((B[i]>=A[k]&&B[i]<=A[i])&&(j!=0)){
                                                while(a!=m){
                                                            A{a+1]=A[a];
                                                            
                                                            
                                                            }
                                                
                                                j--;                         
                       }
                       }
      */      cout<<"\n";
    for(int i=0;i<m;i++){
            cout<<A[i]<<endl;            
            }
    
    system("pause");
    return 0;
    }
