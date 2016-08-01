#include<iostream>

using namespace std;

int main(){
	long long int T;
	cin>>T;
	while(T--){
	long long int N,R,FR,n;
	cin>>N>>R;
	FR=1500;
	for(long long int i=0;i<N;i++){
		cin>>n;
		FR+=n;
	}
	if(FR==R){
		cout<<"Correct";
	}
	else{
		cout<<"Bug";
	}
	cout<<endl;
	}
	system("pause");
	return 0;
}
