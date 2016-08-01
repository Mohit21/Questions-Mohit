#include<bits/stdc++.h>
#define num 786433
using namespace std;

int main(){
           long long N,K,n,Q,val=0,val1=0,v1=0;
           cin>>N;
           vector<long long> v;
           v.clear();
           vector<long long>::iterator it,it1;
           for(long long i=0;i<=N;i++){
                cin>>n;
                v.push_back(n);
            }
            cin>>Q;
            for(long long i=0;i<Q;i++){
                cin>>K;
                val=0;val1=0;v1=1;
                for(it1=v.begin();it1!=v.end();it1++){
                        n=*it1;
                        val1=(((v1%num)*(n%num))%num);
                        val=((val%num)+(val1))%num;
                        val%=num;
                        v1=((v1%num)*(K%num))%num;
                }
                cout<<val<<endl;
            }
    return 0;
}

