#include <iostream>
using namespace std;
 
int findFirstRepeat(int A[],int n){
                    int k=0,c,x;
                  for(int i=0;i<n;i++){
                          c=0;
                          for(int j=1;j<n;j++){                                  
                                  if(A[i]==A[j]){
                                           c++;
                                           }
                                  if(c>0&&k==0){
                                          x=A[i];
                                          k++;
                                          }
                                  }
                          }
                  return x;
                  }
int main(){
    int A[]={6, 10, 5, 4, 9, 120, 4, 6, 10},m,x;
    m = sizeof(A)/sizeof(A[0]);
    x=findFirstRepeat(A,m);
    cout<<"\nThe first repeating element is:"<<x;
    cout<<endl;
    system("pause");
    return 0;
}
