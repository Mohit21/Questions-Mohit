#include<bits/stdc++.h>

using namespace std;

int main(){
long T;
cin>>T;
while(T--){
    	string str;
    	cin>>str;
    	long long i=0;
    	long long count=0;
    	while(str[i]!='\0'){
            if(str[i]=='B'){
                count+=2;
            }
            else if(str[i]=='A' || str[i]=='D' || str[i]=='O' || str[i]=='P' || str[i]=='R' || str[i]=='Q'){
                count+=1;
            }
            i++;
    	}
    	cout<<count;
    	cout<<endl;


}
//system("pause");
return 0;
}
