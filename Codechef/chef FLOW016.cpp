#include<bits/stdc++.h>

using namespace std;

long long getGcd(long long A,long long B){
    if(B==0){
        return A;
    }
    else
            return getGcd(B,A%B);
}

int main(){
int T;
cin>>T;
while(T--){
    	long long A,B,gcd,lcm;
    	cin>>A>>B;
    	gcd=getGcd(A,B);
    	lcm=ceil(((A*B)/gcd));
    	cout<<gcd<<" "<<lcm<<endl;
}
return 0;
}
