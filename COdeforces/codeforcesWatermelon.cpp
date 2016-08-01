
#include<bits/stdc++.h>

using namespace std;
int main(){
int w;
cin>>w;
if(w%2==0 && (w/2)%2==0){
    cout<<"YES";
}
else if(w%2==0){
    int w1=(w/2)-1;
    if(w1%2==0 && (w-w1)%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
else{
    cout<<"NO";
}
return 0;
}
