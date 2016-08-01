#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    int N,N1;
    int T,T1=0;
    cin>>T;
    vector<string> v1,v2,v3;
    vector<string>::iterator it,it1,it2,it3,pos1,pos2;
    while(T--){
               int count=0,k1=0,k2=0;
               cin>>N;
               string str;
               int pos1[N],pos2[N];
               memset(pos1,-1,sizeof(pos1));
               memset(pos2,-1,sizeof(pos2));
               for(int i=0;i<N;i++){
                       cin>>str;
                       v1.push_back(str);
                       cin>>str;
                       v2.push_back(str);
                       }
               int i=0;
               for(it=v1.begin();it!=v1.end();it++){
                                                   for(it2=v1.begin();it2!=v1.end();it2++){
                                                                                           if(*it==*it2 && k1==0){
                                                                                                         k1++;
                                                                                                         }
                                                                                           else if(*it==*it2 && k1>0){
                                                                                                pos1[i++]=distance(v1.begin(),it2);
                                                                                                }
                                                                                        }                     
                                                    }
               for(it1=v2.begin();it1!=v2.end();it1++){
                                                        for(it3=v2.begin();it3!=v2.end();it3++ )       
                                                                                               if(*it1==*it3 && k2==0){
                                                                                                         k2++;
                                                                                                         }
                                                                                               else if(*it1==*it3 && k2>0){
                                                                                                    pos2[i++]=distance(v2.begin(),it3);
                                                                                                    }
                                                                                        }
                                                               
                                                               }
               for(int i=0;i<N;i++){
                       for(int j=0;j<N;j++){
                               if(pos1[i]==pos2[j] && pos1[i]!=-1 && pos2[j]!=-1){
                                                      count++;                        
                                                    }
                               }        
               
               cout<<"Case #"<<++T1<<": "<<count<<endl;        
               }
               
    system("pause");
    return 0;
    }
