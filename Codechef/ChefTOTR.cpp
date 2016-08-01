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
#define starT ll i,N,T;cin>>T; string S;cin>>S;N=S.size();map<int,char> mp;mp.clear();fora(i,N){mp[i]=S[i];mp[i+26]=char(toupper(S[i]));} while(T--)

int numD(ll sub){
    return (sub<10?1:(sub<100?2:(sub<1000?3:(sub<10000?4:5))));
}

ll gcd(ll a, ll b)
{
    return b==0 ? a : gcd(b,a%b);
}

int main(){
    starT{
        /*for(ll k=0;k<52;k++){
            if(k<26){
                    cout<<char(k+97)<<"-->"<<mp[k]<<" "<<endl;
            }
            else{
                cout<<char(k+39)<<"-->"<<mp[k]<<" "<<endl;
            }
        }*/
        string str;
        cin>>str;
        N=str.size();
        fora(i,N){
            if(str[i]=='_'){
                cout<<" ";
            }
            else{
                if(str[i]>=65 && str[i]<=90){
                    cout<<mp[str[i]-'A'+26];
                }
                else if(str[i]>=97 && str[i]<=122){
                    cout<<mp[str[i]-'a'];
                }
                else{
                    cout<<str[i];
                }
            }
        }
    cout<<endl;
	}
return 0;
}
