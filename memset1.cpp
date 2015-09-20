#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int A[10]; 
    memset(A,12,sizeof(int)*10);
    for(int i=0;i<10;i++){
            cout<<"\n-->"<<A[i];
            }
    system("pause");
    return 0;
    }
