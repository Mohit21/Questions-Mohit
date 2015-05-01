#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int getSmall(int A[],int size){
    int i,x,n=0,small;
    for(int j=1;j<size;j++){
            x=A[j];
            i=j-1;
            while(i>=0&&x<A[i]){
                                A[i+1]=A[i];
                                i--;
                    }
                    A[i+1]=x;
            }
    for(int i=0;i<size;i++){
            if(A[i]==0){
                        continue;
                        }
            else{
                 small=A[i];
                 n++;
                 }
            if(n==1){
                     break;
                     }
            }
    return small;
}

int main() {
    int A[10000],ans[10000],k=0,l,N,small,N1,m;
        cin>>N;
        N1=N;
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        while(N1!=0){
            small=getSmall(A,N);
            //cout<<" ==> "<<small;
            m=0;
            for(int i=0;i<N;i++){
                if(A[i]!=0){
                    A[i]=A[i]-small;
                    m++;
                }
                else{
                    continue;
                }
            }
            ans[k]=m;
            k++;
            N1--;
        }
    l=0;
    while(l<k){
        
        if(ans[l]==1||ans[l]==0){
                      cout<<ans[l]<<endl;
                      break;
                      }
        else{
             cout<<ans[l]<<endl;
             }
        l++;
    }
    system("pause");
    return 0;
}
