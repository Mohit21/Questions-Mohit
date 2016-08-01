#include<bits/stdc++.h>
using namespace std;

/* Template by Mohit Kumra
mohitkumra95@gmail.com */

#define mod 1000000007
#define ll long long
#define vll vector<ll>
#define vstr vector<str>
#define pb push_back
#define mpll map<ll,ll>
#define mplstr map<ll,str>
#define prll pair<ll,ll>
#define prlch pair<ll,ch>
#define fr first
#define sc second
#define fora(i,N) for(int i=0;i<N;i++)
#define ford(i,N) for(int i=N-1;i>=0;i--)
#define star ll T;cin>>T;while(T--)

inline void fac(ll n){
    ll fac1=1;
    for(ll i=1;i<=n;i++){
        fac1=(fac1%mod)*(i%mod);
    }
    cout<<fac1%mod;
}

int main(){
star{
    ll count1=0,i,N,N1,ind,prevind=0;
    string str;
    cin>>str;
    N=str.size();
    bool visit[26];
    N1=26;
    fora(i,N1){visit[i]=false;}
    fora(i,N){
        if(!visit[str[i]-'a'] && i==0){
            visit[str[i]-'a']=true;
            count1++;
        }
        else if(!visit[str[i]-'a']){
            visit[str[i]-'a']=true;
            count1++;
        }
    }
    if(count1==1){
        fac(N);
    }
    else if(count1==N){
        fac(N);
    }
    else{

    }
cout<<endl;
}
return 0;
}
