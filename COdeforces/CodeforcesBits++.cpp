#include<bits/stdc++.h>
using namespace std;

int main(){
    	long long T,x=0;
    	cin>>T;
    	while(T--){
                string str;
                cin>>str;
                if(str[0]=='X' && str[1]=='+' && str[2]=='+'){
                    x++;
                }
                else if(str[0]=='+' && str[1]=='+' && str[2]=='X'){
                    ++x;
                }
                else if(str[0]=='X' && str[1]=='-' && str[2]=='-'){
                    x--;
                }
                else if(str[0]=='-' && str[1]=='-' && str[2]=='X'){
                    --x;
                }
    	}
    	cout<<x;
    return 0;
}

