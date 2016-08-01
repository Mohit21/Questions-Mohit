#include<bits/stdc++.h>
using namespace std;

int main(){
long long t,s,x,i,t1;
cin>>t>>s>>x;
t1=t;
if(x<t){
    cout<<"NO";
}
else if(x==t){
    cout<<"YES";
}
else{
    i=1;
    long long k=0,j;
    while(t<x){
        if(i%2==1){
            ++k;
            t=t1+(k*s);
            j=k;
            //cout<<"-->"<<t;
        }
        else if(i%2==0){
            t=t1+((j*s)+1);
           // cout<<"-->"<<t;
        }
        i++;
    }
    if(x==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
return 0;
}
