#include<bits/stdc++.h>

using namespace std;

int main(){
long long T;
double N,M;
cin>>T;
while(T--){
	cin>>N>>M;
	if(abs(N-M)==1){
		cout<<1;
	}
	else{
			cout<<fixed<<setprecision(0)<<abs(N-M);
	}
	cout<<endl;
}
return 0;
}
