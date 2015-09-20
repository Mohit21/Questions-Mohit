//Complexity=====O(Logn)

#include<iostream>

using namespace std;

void search(int A[],int l,int h){
    if(l==h){
         cout<<"-->"<<A[l]<<endl;
        return;
           }
     
    int mid=(l+h)/2;
    if(mid%2==0){
                 if(A[mid]==A[mid+1]){
                                      search(A,mid+2,h);
                                      }
                 else{
                      search(A,l,mid);
                      }
                 }
    else{
         if(A[mid]==A[mid-1]){
                              search(A,mid-2,h);
                              }
         else{
              search(A,l,mid);
              }
         }
   }
int main(){
    int A[]={1, 1, 2, 4, 4, 5, 5, 6, 6},m,index;
    m=sizeof(A)/sizeof(A[0]);
    search(A,0,m-1);
    /*int B[100];
    for(int i=0;i<100;i++){
            B[i]=0;
            }
    for(int i=0;i<m;i++){
            B[A[i]]++;
            }
    for(int i=0;i<100;i++){
            if(B[i]==1){
                        cout<<"->"<<i<<endl;
                        }
            }
    */
    system("pause");
    return 0;
    }
