#include<bits/stdc++.h>
using namespace std;

int main(){
long long N,n1,max=0,smax=0;
cin>>N;
for(long long i=0;i<N;i++){
    cin>>n1;
    if(max<n1){
        smax=max;
        max=n1;
    }
    if(n1==max){
        smax=n1;
    }
}
cout<<max<<" "<<smax;
return 0;
}
