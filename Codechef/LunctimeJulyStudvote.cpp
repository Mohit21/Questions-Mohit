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
#define fora(i,N) for(int i=1;i<N+1;i++)
#define ford(i,N) for(int i=N;i>0;i--)
#define star ll T;cin>>T;while(T--)
/*
int numD(ll sub){
    return (sub<10?1:(sub<100?2:(sub<1000?3:(sub<10000?4:5))));
}
*/
int main(){
    star{
        ll N,K,i;
        cin>>N>>K;
        int A[N+1],count[N+1];
        memset(count,0,sizeof(count));
        fora(i,N){
            cin>>A[i];
        }
        A[0]=0;
        count[0]=0;
        fora(i,N){
            if(A[i]!=i){
                count[A[i]]++;
            }
            else{
                count[A[i]]=-105;
            }
        }
        ll count1=0;
        fora(i,N){
            if(count[i]>=K){
                count1++;
            }
        }
    cout<<count1<<endl;
    }
return 0;
}
