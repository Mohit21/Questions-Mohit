/*#include<bits/stdc++.h>

using namespace std;
int main(){
string str;
cin>>str;
for(int i=0;i<str.size();i++){
    if(str[i]=='A' || str[i]=='O' || str[i]=='Y' || str[i]=='E' || str[i]=='I' || str[i]=='U' ){
        str[i]='/';
    }
    if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='u' || str[i]=='i' || str[i]=='y' ){
        str[i]='/';
    }
}
int count=0;
for(int i=0;i<str.size();i++){
    if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
            count++;
    }
    else if(str[i]>=97 && str[i]<=122){
        count++;
    }
}
string str1;
str1.resize(3*count);
int j=0;
for(int i=0;i<str.size();i++){
    if(str[i]>=97 && str[i]<=122){
        str1[j++]='.';
        str1[j++]=str[i];
        str1[j++]='.';
    }
}
for(int i=0;i<str1.size()-1;i++){
    if(str1[i]=='.' && str1[i+1]=='.'){
        continue;
    }
    else{
        cout<<str1[i];
    }
}

    return 0;
}
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    if(str[0]>=90 && str[0]<=122){
        str[0]-=32;
        cout<<str;
    }
    else{
        cout<<str;
    }
    return 0;
}
