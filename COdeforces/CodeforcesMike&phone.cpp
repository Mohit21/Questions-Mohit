#include<iostream>

using namespace std;

int main(){
long long int N,E;
cin>>N;
string str;
cin>>str;
bool add1=true,sub1=true,add2=true,sub2=true;
for(long long i=0;i<str.size();i++){
    if(str[i]=='3' || str[i]=='6'|| str[i]=='9' || str[i]=='0'){
        add1=false;
    }
}
for(long long i=0;i<str.size();i++){
    if(str[i]=='1' || str[i]=='4'||str[i]=='7' || str[i]=='0'){
        sub1=false;
    }
}
for(long long i=0;i<str.size();i++){
 if(str[i]=='1' || str[i]=='2'||str[i]=='3'){
        add2=false;
    }
}
for(long long i=0;i<str.size();i++){

    if(str[i]=='7' || str[i]=='0'||str[i]=='9'){
        sub2=false;
    }
}

if(add1 || sub1 || add2 || sub2){
    cout<<"NO";
}
else{
    cout<<"YES";
}
//system("pause");
return 0;
}
