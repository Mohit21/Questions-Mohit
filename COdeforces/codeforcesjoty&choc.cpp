#include<bits/stdc++.h>
using namespace std;

int main(){
long long n,a,b,p,q,chocR=0,chocB=0;
cin>>n>>a>>b>>p>>q;
for(long long i=1;i<=n;i++){
    if(i%a==0 && i%b==0){
        if(p>q){
            chocR+=p;
        }
        else{
            chocB+=q;
        }
    }
    else if(i%a==0){
        chocR+=p;
    }
    else if(i%b==0){
        chocB+=q;
    }
}
cout<<chocR+chocB;
return 0;
}
