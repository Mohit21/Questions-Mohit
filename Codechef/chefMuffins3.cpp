#include<iostream>
#include<sstream>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    long n;       
	cin>>n;
	if(n%2==0 && n!=2){
         cout<<n/2;
         }
    else if(n%2==0 && n==2){
              cout<<n; 
              }
    else{
         cout<<(n/2)+1;
         }
    cout<<endl;
}
system("pause");
return 0;
}      
