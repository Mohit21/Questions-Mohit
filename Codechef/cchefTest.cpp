#include<iostream>
using namespace std;
int main(){
long long int N,K;
scanf("%ld",&N);
scanf("%ld",&K);
long long int n;
long long int count=0;
while(N--){
	cin>>n;
	if(n%K==0)
		count++;			
}
cout<<count;
system("pause");
return 0;
}  
