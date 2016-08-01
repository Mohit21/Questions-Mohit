#include<iostream>

using namespace std;

int main(){
    long long int K,C,S;
    int T,T1=0;
    cin>>T;
    while(T--){
               cin>>K;
               cin>>C;
               cin>>S;
               if(S<K){
                       cout<<"Case #"<<++T1<<": IMPOSSIBLE"<<endl; 
                       }
               else if(S>=K){
                    if(C>K){
                            cout<<"Case #"<<++T1<<": "<<S<<endl;    
                           }
                    else if(C<K){
                         cout<<"Case #"<<++T1<<": "<<C<<" "<<C*S<<endl;
                         }
                    else if(K==C&&C==S){
                         cout<<"Case #"<<++T1<<": "<<S<<endl;
                         }
                    }
                    
                }    
    system("pause");
    return 0;
    }
