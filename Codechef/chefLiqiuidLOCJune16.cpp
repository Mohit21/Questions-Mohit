#include<bits/stdc++.h>
#include<map>
using namespace std;

long long max(long long a,long long b) { return (a > b)? a : b; }

long long kSack(long long K,long long V[],map<long long,long long> mp,long long N){
    if(N==0 || K==0){
        return 0;
    }
    if(V[N-1]>K){
        return kSack(K,V,mp,N-1);
    }
    else return max(mp[V[N-1]]+ kSack(K-V[N-1],V,mp,N-1),kSack(K,V,mp,N-1));
}

int main(){
long long T;
cin>>T;
while(T--){
    long long N,M,K,vol=0;
    cin>>N>>M>>K;
    long long C[K],P[N],V[N];
    map<long long,long long> mp;
    map<long long,long long>::iterator itm;
    for(int i=0;i<K;i++){
        cin>>C[i];
    }
    for(int i=0;i<N;i++){
        cin>>P[i];
    }
    for(int i=0;i<N;i++){
        cin>>V[i];
    }
    for(int i=0;i<N;i++){
        mp[V[i]]=P[i];
    }
    cout<<endl;
    for(int i=0;i<N;i++){
        cout<<mp[V[i]]<<" ";
    }
    cout<<endl;
    sort(V,V+N);
    for(int i=0;i<N;i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<N;i++){
        cout<<mp[V[i]]<<" ";
    }
    cout<<endl;
    for(long long i=0;i<K;i++){
            vol+=kSack(C[i],V,mp,N);
    }
    cout<<vol<<endl;
}
return 0;
}
