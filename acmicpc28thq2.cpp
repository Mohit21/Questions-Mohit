#include<iostream>

using namespace std;

int main(){
    int T,N,K,a,c,ans[100],k=0;
    cin>>T;
    while(T){
             c=0;
           cin>>N;
           cin>>K;
           for(int i=0;i<N;i++){
                   cin>>a;
                   a+=7;
                   if(a%7==0){
                              c++;
                              }
                   } 
            ans[k++]=c;       
            T--;
            }
    for(int i=0;i<k;i++){
            cout<<ans[i]<<endl;
            }
    return 0;
    }
