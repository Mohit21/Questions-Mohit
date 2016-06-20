#include<iostream>
#include<vector>
using namespace std;

int main(){
int T,N;
cin>>T;
while(T--){
	cin>>N;
	vector<long long int> v;
	vector<char> v1,v2;
	char ch;
    long long int n;
	for(int i=0;i<N;i++){
		cin>>ch;
		v1.push_back(ch);
	}
	
	for(int i=0;i<N;i++){
		cin>>ch;
		v2.push_back(ch);
	}
	for(int i=0;i<=N;i++){
		cin>>n;
		v.push_back(n);
	}
	int count=0;
	for(int i=0;i<N;i++){
		if(v1[i]==v2[i]){
			count++;
		}
	}
	if(count==N){
		cout<<v[N];
	}
	else{
		int max1=v[0];
		for(int i=0;i<=count;i++){
			if(max1<v[i]){
				max1=v[i];
			}
		}
		cout<<max1;
	}
	cout<<endl;
	v.clear();
	v1.clear();
	v2.clear();
}
system("pause");
return 0;
}
