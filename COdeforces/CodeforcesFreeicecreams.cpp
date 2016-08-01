#include<bits/stdc++.h>
using namespace std;

int main(){
long long n,x,n1,dist=0;
char ch;
cin>>n>>x;
for(long long i=0;i<n;i++){
    cin>>ch;
    if(ch=='+'){
        cin>>n1;
        x+=n1;
    }
    else if(ch=='-'){
        cin>>n1;
        if(x>=n1){
            x-=n1;
        }
        else{
            dist++;
        }
    }
}
cout<<x<<" "<<dist;
return 0;
}
