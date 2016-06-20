#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
               int K;
               string w;
               cin>>w;
               cin>>K;
               int count[26];
               memset(count,0,sizeof(count));
               int pos,pos1;
               for(int i=0;w[i]!='\0';i++){
                     pos=w[i]-'a';
                     count[pos]++;
                     }
               int min=0,max=0,oc=0;
               sort(count,count+26);
               for(int i=0;i<26;i++){
                     if(count[i]!=0 && oc==0){
                                    min=count[i];
                                    oc++;
                     }
                     if(count[i]>max){
                                      max=count[i];
                                      }
                     }
               int count1=0;
               for(int i=0;i<26;i++){
                       if(max==count[i]){
                                         count1++;
                                         }
               }
               if(abs(min-max)==K){
                                   cout<<0;
                                   }
               else{
                    max=abs(max-min);
                    max=abs(max-K);
                    cout<<max*count1;
                    }
                    cout<<endl;
            }
    system("pause");
    return 0;
    }
