#include<iostream>
#include<vector>
#include<string.h>

using namespace std;
int main(){
int T,N,K,L;
cin>>T;
while(T--){
	cin>>N;
	cin>>K;
	vector<string> v,v1;
	vector<int>v2(N,0);
	vector<string>::iterator it,it1;
	string str;
	vector<int>::iterator it2;
	for(int i=0;i<N;i++){
		cin>>str;
		v.push_back(str);
	}
	int pos;
	for(int i=0;i<K;i++){
		cin>>L;
		for(int j=0;j<L;j++){
			cin>>str;
			it=find(v.begin(),v.end(),str);
			if(it!=v.end()){
				pos=it-v.begin();
				v2[pos]=1;
			}
		}
	}
	for(it2=v2.begin();it2!=v2.end();it2++){
		if(*it2==1){
			cout<<"YES"<<" ";
		}
		else{
			cout<<"NO"<<" ";
		}
	}
	
	cout<<endl;
	v.clear();
	v1.clear();
	v2.clear();
}	
system("pause");
return 0;
}
