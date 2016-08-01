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

ll cusum(ll A[],ll i){
    ll sum=0;
    for(ll j=0;j<=i;j++){
        sum+=A[j];
    }
    return sum;
}

int main(){
    star{
          ll N,i;
          cin>>N;
          ll A[N];
          fora(i,N){
            cin>>A[i];
          }
          ll maxlen=0,len=0,sum=0;
          for(i=0;i<N;i++){
            sum=cusum(A,i);
            if(sum%2==0){
                len=i+1;
            }
            else{
                len-=(i+1);
            }
            if(maxlen<=len){
                maxlen=len;
            }
          }
    int flag=0;
    if(maxlen==0){
        fora(i,N){
            if(A[i]%2==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            maxlen=1;
        }
    cout<<maxlen;
    }
    else{
            cout<<maxlen<<endl;
        }
    }
return 0;
}
