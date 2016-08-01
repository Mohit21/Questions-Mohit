#include<bits/stdc++.h>

using namespace std;

int main(){
string str;
cin>>str;
if(str[0]=='.'){
    long long size1;
    size1=str.size();
    long long first=-1,last=-1;
    for(long long i=1;i<size1;i++){
        if(str[i]!='0'){
            first=i;
        }
    }
    if(first!=-1){
            for(long long i=first+1;i<size1;i++){
                if(str[i]!='0'){
                    last=i;
                }
            }
            if(last!=-1){
                    for(long long i=first;i<=last;i++){
                        cout<<str[i];
                    }
                    cout<<"E-"<<first;
            }
            else{
                cout<<str[first]<<"E-"<<first;
            }
    }
    else{
        cout<<0;
    }
}
else if(str[0]=='0'){
    long long size1;
    size1=str.size();
    long long last=-1,dec=-1,first=-1;
    for(long long i=0;i<size1;i++){
        if(str[i]=='.'){
            dec=i;
        }
    }
    if(dec!=-1){
        for(long long i=0;i<size1;i++){
            if(str[i]!='0' && str[i]!='.'){
                first=i;
            }
        }
        if(first<dec &&first==-1){
            for(long long i=first+1;i<size1;i++){
                if(str[i]!='0' && str[i]!='.'){
                    last=i;
                }
            }
            if(last!=-1){
                    cout<<str[first]<<".";
                    for(long long i=first+1;i<=last;i++){
                        cout<<str[i];
                    }
                    cout<<"E-"<<first;
            }
            else if(last==-1){
                cout<<str[first]<<"E-"<<first;
            }
        }
        /*else if(first<dec && first>-1){
            for(long long i=first+1;i<size1;i++){
                if(str[i]!='0' && str[i]!='.'){
                    last=i;
                }
            }
            if(last!=-1){
                    cout<<str[first]<<".";
                    for(long long i=first+1;i<=last;i++){
                        cout<<str[i];
                    }
            }
            else if(last==-1){
                cout<<str[first]<<"E-"<<first;
            }*/
        }
        else{
            for(long long i=first+1;i<size1;i++){
                if(str[i]!='0'){
                    last=i;
                }
            }
            if(last!=-1){
                    cout<<str[first]<<".";
                    for(long long i=first+1;i<=last;i++){
                        cout<<str[i];
                    }
                    cout<<"E-"<<first;
            }
            else{
                cout<<str[first]<<"E-"<<first;
            }
        }
    }
    else{
        last=-1;
        first=-1;
        dec=-1;
        for(long long i=0;i<size1;i++){
            if(str[i]!='0' && str[i]!='.'){
                first=i;
            }
        }
        if(first!=-1){
                for(long long i=first+1;i<size1;i++){
                if(str[i]!='.' && str[i]!='0'){
                        last=i;
                    }
                }
                if(last!=-1){
                        cout<<str[first]<<".";
                        for(long long i=first+1;i<=last;i++){
                            cout<<str[i];
                        }
                        cout<<"E-"<<first;
                }
                else{
                    cout<<str[first]<<"E-"<<first;
                }
        }
        else{
            cout<<0;
        }
    }
}
else{
    long long size1;
    size1=str.size();
    long long last=-1,dec=-1;
    long long first=-1;
    for(long long i=0;i<size1;i++){
            if(str[i]!='0' && str[i]!='.'){
                first=i;
            }
        }
    for(long long i=first;i<size1;i++){
        if(str[i]=='.'){
            dec=i;
        }
    }
    if(dec!=-1){

            for(long long i=0;i<size1;i++){
            if(str[i]!='.' && str[i]!='0'){
                    last=i;
                }
            }
            if(last!=-1 && last<dec){
                    cout<<str[first];
                    for(long long i=1;i<=last;i++){
                        cout<<str[i];
                    }
                    cout<<"E"<<dec-1;
            }
            else if(last!=-1 && last>dec){
                    cout<<str[first]<<".";
                    for(long long i=1;i<=last;i++){
                        cout<<str[i];
                    }
                    cout<<"E"<<dec-1;
            }
            else{
                cout<<str[0]<<"E"<<dec-1;
            }
    }
    else{
        for(long long i=0;i<size1;i++){
            if(str[i]!='0' && str[i]!='.'){
                first=i;
            }
        }
        for(long long i=1;i<size1;i++){
            if(str[i]!='.' && str[i]!='0'){
                    last=i;
                }
            }
            if(last!=-1){
                    cout<<str[first]<<".";
                    for(long long i=1;i<=last;i++){
                        cout<<str[i];
                    }
                    cout<<"E"<<size1-1;
            }
            else{
                cout<<str[first]<<"E"<<size1-1;
            }
    }
}
return 0;
}
