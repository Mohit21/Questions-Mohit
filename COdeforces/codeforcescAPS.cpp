#include<bits/stdc++.h>

using namespace std;

int main(){
           string str;
           cin>>str;
           int i=0,count=0,flag=0;
           for(;i<str.size();i++){
                if(int(str[i])>=65 && int(str[i])<=90){
                    flag=0;
                }
                if(int(str[i])>=93 && int(str[i])<=122){
                    flag=1;
                }
           }
           if(flag==1){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
    return 0;
}
