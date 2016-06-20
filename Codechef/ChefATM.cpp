#include<iostream>
#include<iomanip>
using namespace std;


int main(){

int X;
float Y;
cin>>X;
cin>>Y;
if(Y>X && X%5==0){
	Y-=X;
	Y-=0.50;
	cout<<fixed<<setprecision(2)<<Y;
}
else{
	cout<<fixed<<setprecision(2)<<Y;
}
system("pause");
return 0;
}
