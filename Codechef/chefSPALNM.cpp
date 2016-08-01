#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define beg ll T; cin>>T; while(T--)
#define c 0
#define h 1
#define e 2
#define f 3

inline bool checkPalin(ll N){
    int b,rev=0,N1=N;
    while(N1!=0){
        b=N1%10;
        rev=rev*10+b;
        N1/=10;
    }
if(rev==N){
    return true;
}
else{
    return false;
}
}

int main(){
    beg{
        ll N1,N2,sum=0;
        cin>>N1>>N2;
        for(ll i=N1;i<=N2;i++){
            if(checkPalin(i)){
                sum+=i;
            }
        }
        cout<<sum<<endl;
        }
return 0;
}
