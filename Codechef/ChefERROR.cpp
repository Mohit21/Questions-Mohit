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
    string str;
    cin>>str;
    ll i,N=str.size();
    N-=2;
    int flag=1;
    fora(i,N){
        if(str[i]=='0' && str[i+1]=='1' && str[i+2]=='0'){
            flag=0;
            break;
        }
        if(str[i]=='1' && str[i+1]=='0' && str[i+2]=='1'){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"Good";
    }
    else{
        cout<<"Bad";
    }
cout<<endl;
}
return 0;
}
