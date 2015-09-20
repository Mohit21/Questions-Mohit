//Complexity=====O(Logn)

#include<iostream>

using namespace std;

int main(){
    int A[]={1, 3, 5, 7, 9, 1, 3, 5, 7, 9, 1},m,max;
    m=sizeof(A)/sizeof(A[0]);
    max=A[0];
    for(int i=0;i<m;i++){
            if(A[i]>=max){
                       max=A[i];
                       }
            }
    int B[max];
    cout<<"\nAll the frequencies are:";
    for(int i=0;i<=max;i++){
            B[i]=0;
            }
    for(int i=0;i<m;i++){
            B[A[i]]++;
            }
    cout<<"\n";
    for(int i=0;i<=max;i++){
            cout<<i<<"-->"<<B[i]<<endl;
            }
    
    system("pause");
    return 0;
    }
