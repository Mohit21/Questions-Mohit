#include<bits/stdc++.h>
#include<sstream>
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

ll gcd(ll a, ll b){
    return b==0 ? a : gcd(b,a%b);
}

ll getMax(vll arr, ll n){
    ll mx = arr[0];
    for (ll i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void countSort(vll &arr,ll n,ll exp){
    ll output[n];
    ll i, count[10] = {0};

    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(vll &arr,ll n){
    ll m = getMax(arr, n);
    for (ll exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

ll getsum(vll &A,ll N){
    ll sum=0;
    for(ll i=0;i<N;i++){
            sum+=A[i];
    }
return sum;
}

int main(){
    star{
        ll N,i,sum=0,n,diff=0;
        cin>>N;
        vll v;
        v.clear();
        fora(i,N){
            cin>>n;
            v.push_back(n);
        }
        radixSort(v,v.size());
        int flag=1,flag2=0;
        sum=getsum(v,v.size());
        i=0;
        if(v[0]==0 ){
                if(v[0]%2==0 && sum%3==0){
                        for(ll j=N-1;j>=0;j--){cout<<v[j];}
                }
                else{
                    for(ll j=0;j<N;j++){
                        if(v[j]==3 || v[j]==0 || v[j]==6 || v[j]==9){
                                continue;
                        }
                        else{
                            sum-=v[j];
                            v[j]=-1;
                            if(sum%3==0){
                                   break;
                            }
                        }
                    }
                    if(sum%3==0){
                        for(ll j=N-1;j>=0;j--){
                                if(v[j]!=-1){
                                    cout<<v[j];
                                    }
                            }
                    }
                    else{
                        cout<<-1;
                    }
                }
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }
return 0;
}
