#include<bits/stdc++.h>

using namespace std;

int main(){
int T;
cin>>T;
int A,B,A1,B1,mod,gcd=0,lcm;
while(T--){
    	cin>>A>>B;
    	A1=A;B1=B;
        while(B1!=0){
            mod=A1%B1;
            A1=B1;
            B1=mod;
        }
        lcm=(A*B)/A1;
        cout<<A1<<" "<<lcm<<endl;
}
return 0;
}
