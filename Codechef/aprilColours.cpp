#include<iostream>
#include<cstring>
#include<set>
using namespace std;

int main(){
long long N,countr,ans,countb,countg;
int T;
set<char> s;
string S;
cin>>T;
while(T--){
	cin>>N;
	cin>>S;
	countr=0;countb=0;countg=0;
	int i=0;
	ans=0;
	while(S[i]!='\0'){
		s.insert(S[i]);
		if(S[i]=='R'){
			countr++;
		}
		
		else if(S[i]=='B'){
			countb++;
		}
		
		else if(S[i]=='G'){
			countg++;
		}
		i++;
	}
	if(countr==countb && countb==countg){
		ans=countr+countb;
	}
	else if(countr>countb&&countr>countg){
		ans=countb+countg;
	}
	else if(countb>countr&&countb>countg){
		ans=countr+countg;
	}
	else if(countg>countr&&countg>countb){
		ans=countb+countr;
	}
	else if(s.size()==1){
		ans=0;
	}
	cout<<ans<<endl;	
}
system("pause");
return 0;
}
