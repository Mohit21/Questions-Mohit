#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
long t,A,B;
cin>>t;
while(t--){
    	cin>>A>>B;
    	if(A>=B){
            cout<<A<<" "<<A+B;
    	}
        else{
            cout<<B<<" "<<A+B;
        }
}
//system("pause");
return 0;
}
