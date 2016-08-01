#include<bits/stdc++.h>

using namespace std;

int main(){
long long N;
cin>>N;
long long A[N],i,j,X;
for(long long i=0;i<N;i++){
    cin>>A[i];
}
for(long long j=1;j<N;j++){
        X=A[j];
        i=j-1;
        while(i>=0 && X<A[i]){
            A[i+1]=A[i];
            cout<<i+1<<" "<<i+2<<endl;
            i=i-1;
        }
        A[i+1]=X;
}

return 0;
}
