
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
#define star ll T;cin>>T;while(T--)

int numD(ll sub){
    return (sub<10?1:(sub<100?2:(sub<1000?3:(sub<10000?4:5))));
}

ll gcd(ll a, ll b)
{
    return b==0 ? a : gcd(b,a%b);
}


int main(){
star{
    ll K,a,b;
    cin>>K;
    /*
    Determine the position by / and wat chars occur by %
    */
    a=K/25;
    b=K%25;
    for(ll i=97+b;i>=97&&b!=0;i--){
        cout<<(char)i;
    }
    for(ll i=0;i<a;i++){
        for(ll j=122;j>=97;j--){
            cout<<(char)j;
        }
    }
    cout<<endl;
}
return 0;
}
