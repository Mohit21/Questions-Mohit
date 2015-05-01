#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int t,K,n,m,k=0,l,ans[100000];
    cin>>t;
    while(t!=0){
            cin>>K;   
            if(K%2==0){
                n=K/2;
                m=K/2;
            }
        else{
            n=K/2;
            m=n+1;
        }
        ans[k]=(n*m);
        k++;
        t--;
    }
    l=0;
    while(l<k){
        cout<<ans[l]<<endl;
        l++;
    }
    system("pause");
    return 0;
}
