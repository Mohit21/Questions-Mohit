#include<bits/stdc++.h>

using namespace std;

int smallest(int A[],int N,int i){
    int k=i,min=A[k],pos;
    for(int i=k;i<N;i++){
        if(min>=A[i]){
            min=A[i];
            pos=i;
        }
    }
    return pos;
}

void selSort(int A[],int N){
    int pos,temp;
    for(int i=0;i<N;i++){
        pos=smallest(A,N,i);
        temp=A[i];
        A[i]=A[pos];
        A[pos]=temp;
    }
}
int main(){
int A[]={8,7,5,4,6,3,1,9};
int N;
N=sizeof(A)/sizeof(A[0]);
for(int i=0;i<N;i++){
    cout<<"-->"<<A[i];
}
selSort(A,N);
cout<<"\nSelection Sort\n";
for(int i=0;i<N;i++){
    cout<<"-->"<<A[i];
}
return 0;
}
