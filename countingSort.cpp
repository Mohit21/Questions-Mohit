#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<map>
#include<string>
#define size1 10
using namespace std;

void countingSort(int A[],int size){
     int count[size1],output[size1];
     memset(count,0,sizeof(count));
     for(int i=0;i<size;i++){
             count[A[i]]++;
             }
     for(int i=1;i<=size;i++){
             count[i]+=count[i-1];
             }
     for(int i=0;i<size;i++){
             output[count[A[i]]-1]=A[i];
             --count[A[i]];
             }
     for(int i=0;i<size;i++){
             A[i]=output[i];
             }
}
    
int main(){
    int A[]={2,7,6,1,8,3,0,9,9,4};
    cout<<"\nCounting Sort!!"<<endl;
    int size=sizeof(A)/sizeof(A[0]);
    countingSort(A,size);
    for(int i=0;i<size;i++){
            cout<<"-->"<<A[i];
            }    
    system("pause");
    return 0;
    }
