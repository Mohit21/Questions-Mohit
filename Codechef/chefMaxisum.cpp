#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
int T;
cin>>T;
while(T--){
	int N1,K1;
	cin>>N1;
	cin>>K1;
	int A[N1],B[N1];
	for(int i=0;i<N1;i++){
	cin>>A[i];
	}
	for(int i=0;i<N1;i++){
	cin>>B[i];
	}
	long  maxiSum=0;
	for(int i=0;i<N1;i++){
	maxiSum+=A[i]*B[i];
	}
	if(B[0]<0){
	B[0]*=-1;
	}
	long maxiSum1=B[0];
	for(int i=0;i<N1;i++){
	if(B[i]<0){
	B[i]*=-1;
	}
	if(maxiSum1<B[i]){
	maxiSum1=B[i];
	}
	}
	maxiSum+=(maxiSum1*K1);
	cout<<maxiSum<<endl;
}
return 0;
}
