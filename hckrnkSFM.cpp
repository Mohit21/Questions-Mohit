#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int findMedian(long int a[],long int beg,long int last){
    long int mid,t,m;
    mid=(beg+last)/2;
    m=a[mid];
    return m;
}

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

int main() {
    long int size,m;
    cin>>size;
    long int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    insertionSort(a,size);
    m=findMedian(a,0,size);
    cout<<m;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    system("pause");
    return 0;
}
