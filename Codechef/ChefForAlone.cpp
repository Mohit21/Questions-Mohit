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
ll N,i,N1,count=0;
cin>>N;
string str,str2;
vector<string> ki,ka;
ki.clear();
ka.clear();
vector<string>::iterator itki,itka;
fora(i,N){
    cin>>str;
    N1=str.size();
    if(str[N1-2]=='k' && str[N1-1]=='i'){
        ki.push_back(str);
    }
    if(str[N1-2]=='k' && str[N1-1]=='a'){
        ka.push_back(str);
    }
}
if(ki.size()==0 || ka.size()==0){
    cout<<0<<endl;
}
else{
string ski,ska;
for(itka=ka.begin();itka!=ka.end();itka++){
            for(itki=ki.begin();itki!=ki.end();itki++){
                str=*(itka);
                str2=*(itki);
                N=str.size();
                N1=str2.size();
                ska=str.substr(0,N-2);
                ski=str2.substr(0,N1-2);
                if(ska.compare(ski)==0){
                    *(itka)="A";
                    *(itki)="B";
                    count++;
                }
            }
}
cout<<count;
}
return 0;
}
