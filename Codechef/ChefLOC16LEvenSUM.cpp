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

//int numD(ll sub){
 //   return (sub<10?1:(sub<100?2:(sub<1000?3:(sub<10000?4:5))));
//}

int main(){
    star{
        ll i,N;
        cin>>N;
        ll A[N];
        fora(i,N){
            cin>>A[i];
        }
        ll maxlen=0,len=0,sum=0;
        fora(i,N){
            sum+=A[i];
            if(sum%2==0){
                ++len;
            }
            else{
                len=0;
                if(A[i]%2==0){
                    len=1;
                    sum=A[i];
                }
                else{
                    len=0;
                    sum=A[i];
                        }
            }
            if(len>maxlen){
                    maxlen=len;
                }
        }
    cout<<maxlen<<endl;
}
return 0;
}
