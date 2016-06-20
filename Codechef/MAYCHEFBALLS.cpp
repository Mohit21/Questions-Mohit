#include<iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int main(){
int inpt1=0,inpt2=0;
cout<<1<<endl;
fflush(stdout);
cout<<"2"<<" "<<"1"<<" "<<"2"<<endl;
fflush(stdout);
cout<<2<<" "<<"3"<<" "<<"4"<<endl;
fflush(stdout);
fflush(stdin);
cin>>inpt1;
if(inpt1==0){
	cout<<"2"<<endl<<"5";
	fflush(stdout);
	exit(0);
	}
else if(inpt1>0){

    cout<<"1"<<endl;
    fflush(stdout);
	cout<<"1"<<" "<<"1"<<endl;
	fflush(stdout);
	cout<<"1"<<" "<<"2"<<endl;
	fflush(stdout);
	fflush(stdin);
	cin>>inpt2;
	if(inpt2>0){
		cout<<"2"<<endl<<"1";
		fflush(stdout);
		exit(0);
		}
	else{
		cout<<"2"<<endl<<"2";
		fflush(stdout);
		exit(0);
		}
}
else if(inpt1<0){

    cout<<"1"<<endl;
    fflush(stdout);
	cout<<"1"<<" "<<"3"<<endl;
	fflush(stdout);
	cout<<"1"<<" "<<"4"<<endl;
	fflush(stdout);
	fflush(stdin);
	cin>>inpt2;
	if(inpt2>0){
		cout<<"2"<<endl<<"3";
		fflush(stdout);
		exit(0);
		}
	else{
		cout<<"2"<<endl<<"4";
		fflush(stdout);
		exit(0);
		}
}
fflush(stdout);
return 0;
}
