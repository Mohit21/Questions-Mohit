#include<bits/stdc++.h>
#include<map>
using namespace std;

inline int knapSack(long long V1, long long V[], long long P[], long long N,long long M){
   long i, v;
   long K[N+1][V1+1];
   for (i = 0; i <= N; i++){
       for (v = 0; v <= V1; v++){
           if (i==0 || v==0)
               K[i][v] = 0;
           else if (V[i-1] <= v)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}


int main(){
long long T;
cin>>T;
while(T--){
    vector<long long> P,V,C;
    vector<long long>::iterator it,it1;
    vector<long long>::reverse_iterator rit,rit1;
    map<long long,long long> mp;
    map<long long,long long>::iterator itm;
    long long N,M,K,c,p,v;
    cin>>N>>M>>K;
    for(int i=0;i<K;i++){
        cin>>c;
        C.push_back(c);
    }
    for(int i=0;i<N;i++){
        cin>>p;
        P.push_back(p);
    }
    for(int i=0;i<N;i++){
        cin>>v;
        V.push_back(v);
    }
    it=P.begin(),it1=V.begin();
    for(int i=0;i<N;i++){
        mp[*it1]=*it;
        it++;
        it1++;
    }
    long long vol=0;
    vol=knapsack();
    cout<<vol<<endl;
}
return 0;
}
