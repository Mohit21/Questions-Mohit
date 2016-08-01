#include<bits/stdc++.h>
using namespace std;
bool check(long long A[],long long N,long long L,long long R){
    long long oc,V=floor((R-L+1)/2);
    int flag=0;
    for(long long i=L-1;i<=R-1;i++){
        oc=0;
        flag=0;
        for(long long j=L-1;j<=R-1;j++){
            if(A[i]==A[j]){
                ++oc;
                //cout<<"->"<<A[j];
            }
        }
        //cout<<oc<<endl;
        if(oc>V){
            flag=1;
            break;
        }
    }
//cout<<endl;
if(flag==1){
    return true;
}
else{
    return false;
}
}

int main(){
    long long N,Q,op,x,y,L,R;
    cin>>N>>Q;
    long long int A[N];
    for(long long i=0;i<N;i++){
        cin>>A[i];
    }
    for(long long i=0;i<Q;i++){
        cin>>op;
        if(op==1){
            cin>>x>>y;
            A[x-1]=y;
        }
        else{
            cin>>L>>R;
            if(check(A,N,L,R)==true){
                    cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
