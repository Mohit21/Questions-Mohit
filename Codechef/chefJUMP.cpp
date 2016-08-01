#include<bits/stdc++.h>

using namespace std;

int main(){
    	long long a;
    	cin>>a;
    	if(a>=6){
            if(a%6==0){
                cout<<"yes";
            }
            else if(a%6==1){
                cout<<"yes";
            }
            else if(a%6==3){
                cout<<"yes";
            }
            else{
                cout<<"no";
            }
    	}
    	else if(a==0){
            cout<<"yes";
    	}
    	else if(a==1){
            cout<<"yes";
    	}
    	else if(a==3){
            cout<<"yes";
    	}
    	else{
            cout<<"no";
    	}
    	cout<<endl;
//system("pause");
return 0;
}
