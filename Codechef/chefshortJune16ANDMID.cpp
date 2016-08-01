#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
long long N,Q,n,L,R,X;
cin>>N>>Q;
long long A[N];
for(long long i=0;i<N;i++){
    cin>>A[i];
}
for(long long i=0;i<Q;i++){
    cin>>n;
    if(n==0){
        cin>>L>>R;
        L-=1;R-=1;
        cout<<*min_element(A+L,A+R)<<endl;
    }
    else{
        cin>>L>>R>>X;
        for(int i=L-1;i<R;i++){
            A[i]=(A[i] & X);
        }
    }
}
return 0;
}
