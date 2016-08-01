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
        ll N,P,Q,i,count=0,tp,tq;
        cin>>N>>P>>Q;
        tp=P;
        tq=Q;
        ll A[N];
        fora(i,N){
            cin>>A[i];
        }
        sort(A,A+N);
            fora(i,N){
                if(A[i]%2==0){
                    if(A[i]<=(2*Q)){
                        Q-=A[i]/2;
                        count++;
                    }
                    else if(((2*Q)+P)>=A[i]){
                        A[i]-=(2*Q);
                        Q=0;
                        P-=A[i];
                        count++;
                    }
                }
                else{
                        if(P!=0){
                            --A[i];
                            --P;
                            if(A[i]<=(2*Q)){
                                    Q-=(A[i])/2;
                                    count++;
                                }
                            else if(((2*Q)+P)>=A[i]){
                                    A[i]-=(2*Q);
                                    Q=0;
                                    P-=A[i];
                                    count++;
                            }
                        }
                    }
                }
        cout<<count<<endl;
    }
return 0;
}
