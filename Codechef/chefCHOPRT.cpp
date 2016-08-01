#include<bits/stdc++.h>

using namespace std;

int main(){
int T;
cin>>T;
while(T--){
    	long long A,B;
    	cin>>A>>B;
    	if(A>B){
            cout<<">";
    	}
    	if(A<B){
            cout<<"<";
    	}
    	if(A==B){
            cout<<"=";
    	}
    	cout<<endl;
}
return 0;
}
