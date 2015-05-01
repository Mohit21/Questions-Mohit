#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,K,Q,x,j=0;
    cin>>N;
    cin>>K;
    cin>>Q;
    int a[N],b[Q],c[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<Q;i++){
        cin>>b[i];
    }
    while(j<K){
            x=a[N-1];
            for(int i=0;i<N-1;i++){
            c[i+1]=a[i];
            }
            c[0]=x;
            for(int i=0;i<N;i++){
                    a[i]=c[i];
                    }
    j++;
    }
    for(int k=0;k<Q;k++){
        j=b[k];
        cout<<a[j]<<endl;
    }   
    return 0;
}
