#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define beg ll T; cin>>T; while(T--)
#define c 0
#define h 1
#define e 2
#define f 3

bool checkPrime(ll N){
    int count=0;
    for(ll i=1;i<=sqrt(N);i++){
        if(N%i==0){
           count++;
        }
        if(count>1){
            break;
        }
    }
if(count==1){
    return true;
}
else{
    return false;
}
}

int main(){
    beg{
        ll N;
        cin>>N;
        if(checkPrime(N)){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
        cout<<endl;
        }
return 0;
}
