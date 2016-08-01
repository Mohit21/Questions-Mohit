#include<bits/stdc++.h>
using namespace std;

int main(){
string str;
cin>>str;
long long i=0;
if(str[0]=='0'){
    int flag=0;
    long long k1=0;
    while(str[k1]!='.'){
        k1++;
    }
    k1+=1;
    while(str[k1]!='e'){
        if(str[k1]=='0'){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
        k1++;
    }
    if(flag==0){
        cout<<0;
    }
    else{
            while(str[i]!='e'){
            cout<<str[i];
            i++;
        }

    }
}
else if(str[0]!='0'){
    long long dec=0,d=0,e=0;
    while(str[i]!='.'){
        ++dec;
        i++;
    }
    i=i+1;
    while(str[i]!='e'){
        d++;
        i++;
    }
    i=i+1;
    while(str[i]!='\0'){
        e=e*10+(str[i]-48);
        i++;
    }
    if(d==e){
        if(d==0){
             i=0;
             while(str[i]!='.'){
                cout<<str[i];
                i++;
             }
        }
        else{
            i=0;
            while(i<dec){
                cout<<str[i];
                i++;
            }
            i=i+1;
            while(str[i]!='e'){
                cout<<str[i];
                i++;
            }

        }
    }
    else if(e<d){
        if(e==0){
             i=dec+1;
             int flag=0;
             while(str[i]!='e'){
                if(str[i]=='0'){
                    flag=0;
                }
                else{
                    flag=1;
                    break;
                }
                i++;
             }
             if(flag==0){
                i=0;
                while(str[i]!='.'){
                    cout<<str[i];
                    i++;
                }
             }
             else{
                    i=0;
                    while(str[i]!='e'){
                        cout<<str[i];
                        i++;
                    }
                }

            }
        else{
                i=0;
                while(str[i]!='.'){
                    cout<<str[i];
                    i++;
                }
                i=i+1;
                long long i1=0;
                while(i1<e){
                    cout<<str[i];
                    i++;
                    i1++;
                }
                cout<<".";
                d=d-e;
                while(d>0){
                    cout<<str[i];
                    i++;
                    --d;
                }
        }
    }
    else if(e>d){
        i=0;
        while(i<dec){
            cout<<str[i];
            i++;
        }
        i=i+1;
        while(str[i]!='e'){
            cout<<str[i];
            i++;
        }
        for(long long j=d;j<e;j++){
            cout<<0;
        }
    }
}
return 0;
}
