#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main(){
    int T;
    long long N;
    cin>>T;
    while(T--){
            string str,s1,s2;
            cin>>str;
            long long size=str.size(),counta=0,countb=0;
            while(size--){
                    s1.append("a");
                    s2.append("b");
                    }
            if(str.compare(s1)==0 || str.compare(s2)==0){
                 cout<<0;
                 }
            else{
                 int i=0;
                 while(str[i]!='\0'){
                         if(str[i]=='a'){
                              counta++;
                              }
                         else if(str[i]=='b'){
                              countb++;
                              }
                         i++;
                         }
                 if(counta==countb){
                                   cout<<counta;
                                   }
                 else if(counta>countb){
                      cout<<countb;
                      }
                 else if(countb>counta){
                      cout<<counta;
                      }
                 }
            cout<<endl;
            }
    system("pause");
    return 0;
    }
