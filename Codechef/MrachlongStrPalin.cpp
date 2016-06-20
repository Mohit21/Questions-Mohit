#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int checkPalin(string S1,string S2,int len1,int len2){
cout<<"\n-->"<<S1<<" -->"<<S2<<endl;
S1.resize(len1+1);
S2.resize(len2+1);
S1.append(S2);
int flag=-1;
len1=S1.size();
cout<<"\n-->"<<S1<<endl;
for(int i=0,j=(len1-1);i<len1,j>=0;i++,j--){
if(S1[i]==S1[j]){
flag=0;
}
else{
flag=1;
break;
}
}
if(flag==1)
	return 1;
else if(flag==0)
	return 0;
else
    return 1;
} 

int main(){
long long T;
cin>>T;
while(T--){
	string s1,s2;
	int flag=-1;
	int break1=-1; 
    long long len1=0,len2=0;
	cin>>s1;
	cin>>s2;
	len1=s1.size();
	len2=s2.size();
	if(len1>1&&len2>1){
		//for(int j=0;j<len2;j++){
			for(int i=0,j=0;i<len1,j<len2;i++,j++){
				if(checkPalin(s1,s2,i,j)==0){
				flag=0;
                //break1=0;
                break;
				}
				else{
				flag=1;
				}	
			}
		/*
			if(break1==0){
                           break;
                           }
        }*/
			if(flag==1){
				cout<<"No"<<endl;
			}
			else if(flag==0){
                 cout<<"Yes"<<endl;
                 }
		}
else{
		s1.append(s2);
		if(s1[0]==s1[1]){
		cout<<"Yes"<<endl;
		}
		else{
		cout<<"No"<<endl;
		}
	}
	}
system("pause");
return 0;
}
