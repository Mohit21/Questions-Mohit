#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void insertionSort(long int a[],int size){
    int j,i,x;
    for(j=0;j<size;j++){
        x=a[j];
        i=j-1;
        while(i>=0&&a[i]>x){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=x;
    }
}

long int calDiff(long int a[],long int size,long int b[]){
    long int diff=100000000,k=0,diff1;
    for(int i=0;i<size-1;i++){
        diff1=a[i+1]-a[i];
        if(diff1<diff){
            diff=diff1;
            }
    }
    cout<<"\ndiff="<<diff;
    for(int i=0;i<size-1;i++){
        diff1=a[i+1]-a[i];
        if(diff1==diff){
            b[k++]=a[i];
            b[k++]=a[i+1];
            }
    }
    return k;
}

int main() {
    long int size,k;
    cin>>size;
    long int a[size],b[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    insertionSort(a,size);
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<"-->";        
    }
    k=calDiff(a,size,b);
    cout<<"\n\n";
    for(int i=0;i<k;i++){
        cout<<b[i]<<" ";        
    }
    system("pause");
    return 0;
}
