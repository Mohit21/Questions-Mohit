#include<iostream>
#include<vector>

using namespace std;

int main(){
int T;
cin>>T;
while(T--){	
	int N;
	cin>>N;
	long long int A[N],n;
	for(int i=0;i<N;i++){
		cin>>A[i];
		}
	long long int count=0,sum=0;
	
	for(int i=N-1;i>1;i--){
		sum=A[i-1]+A[i-2];
		if(count==0 && (A[i]==sum)){
			count+=3;
		}
		else if(A[i]==sum){
			count++;
		}
	} 
	cout<<count<<endl;
}
system("pause");
return 0;
}
