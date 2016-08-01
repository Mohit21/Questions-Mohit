
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
/*
ll LCS(string str1,string str2,int M,int N){
    if(M==0 || N==0){
                return 0;
                }
    else if(str1[M-1]==str2[N-1]){
            return 1+ LCS(str1,str2,M-1,N-1);
    }
    else{
        return max(LCS(str1,str2,M-1,N),LCS(str1,str2,M,N-1));
    }
}
*/

bool isSubseq(string str1,string str2,int M,int N){
    ll i,j=0;
    for(i=0;i<N&&j<M;i++){
        if(str1[j]==str2[i]){
            j++;
        }
    }
    if(j==M){
        return true;
    }
    else{
        return false;
    }
}

int main(){
star{
    string str1,str2;
    cin>>str1>>str2;
    int M,N;
    M=str1.size();
    N=str2.size();
    //ll len=LCS(str1,str2,M,N);
    if(M<=N){
            if(isSubseq(str1,str2,M,N)){
                    cout<<"YES";
            }
            else{
                cout<<"NO";
            }
    }
    else{
        if(isSubseq(str2,str1,N,M)){
                    cout<<"YES";
            }
        else{
                cout<<"NO";
            }
    }
    cout<<endl;
}
return 0;
}
