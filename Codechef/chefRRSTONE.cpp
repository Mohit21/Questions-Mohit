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
#define setll set<ll>
#define setch set<ch>
#define fr first
#define sc second
#define fora(i,N) for(int i=0;i<N;i++)
#define ford(i,N) for(int i=N-1;i>=0;i--)
#define forai(i,N) for(int i=0;i<N;i++)
#define foraj(j,N) for(int j=0;j<N;j++)
#define forak(j,N) for(int k=0;k<N;k++)
#define star ll N,K;cin>>N>>K;

int numD(ll sub){
    return (sub<10?1:(sub<100?2:(sub<1000?3:(sub<10000?4:5))));
}

ll gcd(ll a, ll b)
{
    return b==0 ? a : gcd(b,a%b);
}

int main(){
    star
    ll max1,i,n;
    vll v;
    v.clear();
    fora(i,N){
        cin>>n;
        v.push_back(n);
    }
    if (K>0&&K%2==1)
        K=1;
    else if (K>0&&K%2==0)
        K=2;
    for(i=0;i<K;i++){
        max1=*max_element(v.begin(),v.end());
        for(ll j=0;j<N;j++){
            v[j]=max1-v[j];
        }
    }
    fora(i,N){
        cout<<v[i]<<" ";
    }
return 0;
}
