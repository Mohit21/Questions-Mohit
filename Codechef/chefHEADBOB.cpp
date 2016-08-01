#include<bits/stdc++.h>
using namespace std;

int main(){
long T;
cin>>T;
while(T--){
    int N;
    cin>>N;
    string str;
    cin>>str;
    int sol=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='Y'){
           sol=1;
           break;
        }
        else if(str[i]=='I'){
            sol=2;
            break;
        }
        i++;
    }
    if(sol==1){
                cout<<"NOT INDIAN";
                    }
    else if(sol==2){
            cout<<"INDIAN";
        }
    else if(sol==0){
        cout<<"NOT SURE";
    }
    cout<<endl;
}
return 0;
}

