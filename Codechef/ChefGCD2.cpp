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
	string B;
	ll A;
	cin>>A>>B;
	if(A==0){
		cout<<B;
	}
	else{
		ll B1=0;
		for(ll i=0;i<B.size();i++){
			B1=(((B1*10)%A)+(B[i]-'0')%A)%A;
		}
	cout<<gcd(A,B1);
	}
	cout<<endl;
	}
return 0;
}
