#include<iostream>
 
using namespace std;
 
int main(){
int t,n;
double fac=1;
cin>>t;
while(t--){
           fac=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		fac*=i;
	}
	cout<<fac<<endl;
}
system("pause");
return 0;
}
 
