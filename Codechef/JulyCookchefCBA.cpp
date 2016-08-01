#include<bits/stdc++.h>
using namespace std;
#define a A[0]
#define b A[1]
#define c A[2]
#define d A[3]

int main(){
float A[4];
for(int i=0;i<4;i++){
    cin>>A[i];
}
if((A[0]/A[1])==(A[2]/A[3])){
    cout<<"Possible";
}
else{
    sort(A,A+4);
    if((a/b)==(c/d) || (a/b)==(d/c)){
        cout<<"Possible";
    }
    else if((a/c)==(b/d) || (a/c)==(d/b)){
        cout<<"Possible";
    }
    else if((a/d)==(b/c) || (a/d)==(c/b)){
        cout<<"Possible";
    }
    else{
        cout<<"Impossible";
    }
}
return 0;
}
