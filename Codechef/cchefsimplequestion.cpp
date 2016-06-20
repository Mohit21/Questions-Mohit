#include<iostream>
#define num 1000000007 
using namespace std;

int main(){
int T;
cin>>T;
while(T--){
	long long int N;
	cin>>N;
	long long int ways;
	N-=1;
	ways=1;
	while(N!=0){
		ways=ways*N;
		N--;
	}
	cout<<ways%num<<endl;
}

system("pause");
return 0;
}
