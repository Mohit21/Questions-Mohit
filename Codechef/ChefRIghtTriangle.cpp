#include<bits/stdc++.h>
using namespace std;

/* Template by Mohit Kumra
mohitkumra95@gmail.com */

#define mod 1000000007
#define ll long long
#define vll vector<ll>
#define vstr vector<str>
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

double getlen(int x1,int y1,int x2,int y2){
    return ((((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))));

}
int main(){
    ll count=0;
	star{
        int x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        vector<double> v;
        v.clear();
        v.push_back(getlen(x1,y1,x2,y2));
        v.push_back(getlen(x1,y1,x3,y3));
        v.push_back(getlen(x2,y2,x3,y3));
        sort(v.begin(),v.end());
        if(((v[0])+(v[1]))==(v[2])){
            count++;
        }
	}
	cout<<count;
return 0;
}
