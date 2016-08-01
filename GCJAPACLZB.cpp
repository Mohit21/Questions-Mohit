#include<iostream>
#include<cmath>
#include<string>
#include<set>
#include<vector>
#define num 1000000007
using namespace std;

int main(){
    long long T,T1=0;
    cin>>T;
    while(T--){
               string str;
               cin>>str;
               set<char> s;
               vector<char> v;
               if(str.size()==1){
                       cout<<"Case #"<<++T1<<": "<<1<<endl;
                    }
               else if(str.size()==2 && str[0]==str[1]){
                    cout<<"Case #"<<++T1<<": "<<1<<endl;
                    }
               else if(str.size()==2){
                    cout<<"Case #"<<++T1<<": "<<4<<endl;
                    }
               else{
                    long long ans=4,N,i=0,N1,ans1=1;
                    double pow1;
                    while(str[i]!='\0'){
                                        s.insert(str[i]);
                                        v.push_back(str[i]);
                                        i++;
                            }
                    N=s.size();
                    N1=v.size()-s.size();
                    for(int i=1;i<=N1;i++){
                            ans1=ans1*i;
                          }
                    if(N>2){
                            ans=4;
                            N-=2;        
                            pow1=(pow((double)N,(double)N));
                            cout<<"Case #"<<++T1<<": "<<((ans%num)*(((long long)pow1)%num)/ans1)<<endl;
                    
                         }
                    else{
                         ans=4;
                         cout<<"Case #"<<++T1<<": "<<((ans%num)/ans1)<<endl;
                         }
                    }
               }
    return 0;
    }
