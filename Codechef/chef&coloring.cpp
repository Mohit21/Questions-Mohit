#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main(){
    int T;
    long long N;
    cin>>T;
    while(T--){
            cin>>N;
            string str,s1,s2,s3;
            cin>>str;
            long long size=str.size(),countR=0,countG=0,countB=0;
            while(size--){
                    s1.append("R");
                    s2.append("B");
                    s3.append("G");
                    }
            if(str.compare(s1)==0 || str.compare(s2)==0 || str.compare(s3)==0){
                 cout<<0;
                 }
            else{
                 int i=0;
                 while(str[i]!='\0'){
                         if(str[i]=='R'){
                              countR++;
                              }
                         else if(str[i]=='B'){
                              countB++;
                              }
                         else if(str[i]=='G'){
                              countG++;
                              }
                         i++;
                         }
                 if(countR==countB && countB==countG){
                                   cout<<(str.size())-1;
                                   }
                 else if(countR>countB && countR>countG){
                      cout<<countB + countG;
                      }
                 else if(countB>countR && countB>countG){
                      cout<<countR + countG;
                      }
                 else if(countG>countR && countG>countB){
                      cout<<countB + countR;
                      }
                 else if((countR+countB) == str.size()){
                         cout<<countR; 
                          }
                 else if((countR+countG) == str.size()){
                         cout<<countR; 
                          }
                 else if((countG+countB) == str.size()){
                         cout<<countG; 
                          }
                 }
            cout<<endl;
            }
    system("pause");
    return 0;
    }
