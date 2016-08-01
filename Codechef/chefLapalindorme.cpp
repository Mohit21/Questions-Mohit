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

int numD(ll sub){
    return (sub<10?1:(sub<100?2:(sub<1000?3:(sub<10000?4:5))));
}

int main(){
star{
    string str;
    cin>>str;
    string s1,s2;
    s1=str.substr(0,str.size()/2);
    s2=str.substr(str.size()-(str.size())/2);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1.compare(s2)==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}
return 0;
}
