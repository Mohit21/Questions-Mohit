#include<iostream>
#define max 50
using namespace std;

void sortByOneSwap(int A[],int b){
     int pos,pos1,a,j=0;
     for(int i=0;i<b;i++){
             if(A[i]>A[i+1]){
                             if(j==0){
                                      pos=i;
                                      }
                             else {
                                  pos1=i;
                                  }
                                  j++;
                             }
             }
     a=A[pos];
     A[pos]=A[pos1];
     A[pos1]=a;
     }

int main(){
    int n,A[max],k=0,j,l=0,m=0,flag=0;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>A[i];
            }
    sortByOneSwap(A,n);
    cout<<"After one swap:"<<endl;
    for(int i=0;i<n;i++){
            cout<<"-->"<<A[i];
            }
    system("pause");
    return 0;
    }

