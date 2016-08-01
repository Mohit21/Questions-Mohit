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


int main(){
star{
    ll N;
    cin>>N;
    ll i,A[N],count=0,sum=0,mxs=0;
    fora(i,N){
        cin>>A[i];
    }
    fora(i,N){
        sum+=A[i];
        if(sum%2==0){
            ++count;
        }
        else{
            sum=0;
            if(mxs<count){
                mxs=count;
            }
            count=0;
        }
    }
    if(mxs==0 && count!=0){
        cout<<count<<endl;
    }
    else{
    cout<<mxs<<endl;
    }
}
return 0;
}
