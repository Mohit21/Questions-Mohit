#include<bits/stdc++.h>

using namespace std;

int main(){
int n,n1;
cin>>n;
if(n==1){
        cin>>n1;
        if(n1==0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
}
else{
    int count[2];
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++){
        cin>>n1;
        if(n1==0){
            count[0]++;
        }
        else if(n1==1){
            count[1]++;
        }
    }
    ifl(count[0]>1){
        cout<<"NO";
    }
    else if(count[0]==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
return 0;
}
