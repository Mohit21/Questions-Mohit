#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++){
        string str;
        int bef,aft;
        cin>>str;
        cin>>bef>>aft;
        if(bef>=2400 && aft>bef){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

