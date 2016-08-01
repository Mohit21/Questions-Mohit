#include<iostream>
#include<cstring>
using namespace std;

int main(){
	long long int T;
	cin>>T;
	while(T--){
	bool flag=true;
	string str1,str2;
	cin>>str1>>str2;
	if(str1.size()==str2.size()){
		for(long long i=0;i<str1.size();i++){
			if(((str1[i]=='p' || str1[i]=='P' ) && (str2[i]=='b' || str2[i]=='B'))|| ((str1[i]=='b' || str1[i]=='B' ) && (str2[i]=='p' || str2[i]=='P')) ||((str1[i]=='e' || str1[i]=='E' )&&(str2[i]=='i' ||str2[i]=='I')) ||((str1[i]=='i' || str1[i]=='I' )&&(str2[i]=='e' ||str2[i]=='E'))){
			}
			else{
				if(str1[i]==str2[i]){
					flag=true;
				}
				else{
					flag=false;
					break;
				}
			}
		}
		if(flag){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
	}
	else{
		cout<<"No";
	}
	cout<<endl;
	}
	system("pause");
	return 0;
}
