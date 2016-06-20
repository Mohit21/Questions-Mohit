#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
string str;
getline(cin,str);
int size=str.size();
int count,i;
count=1;
for(int i=0;i<size;i++){
	if(str[i]=='('){
		count++;
	}
}
if(count==1){
	i=0;
	for(int i=0;i<size;i++){
		if(str[i]!='(' && str[i]!=')'){
			cout<<str[i];
		}
    }
}
else{
	i=0;
	for(int i=0;i<size;i++){
            if(str[i]=='(' && count>1){
		                   --count;
		    }
	     if(count==1 && str[i]!=')' && str[i]!='('){
	             cout<<str[i];
	             }
	}
}
system("pause");
return 0;
}

