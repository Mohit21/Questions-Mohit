#include <iostream>
#include<vector>
using namespace std;

int main(){
    int T,N;
    cin>>T;
    while(T--){
               fflush(stdin);
               cin>>N;
               char ch[N];
               bool count[N];
               for(int i=0;i<N;i++){
                       cin>>ch[i];
                       count[i]=0;
                       }
                       count[N-1]=1;
               if(N==1){
                        cout<<1<<endl;
                        }
               else{
                    for(int i=0;i<N;i++){
                            if(ch[i]!=ch[i+1]&&i<N){ 
                                               if(ch[i]=='R'){
                                                              if(ch[i+1]=='B'){
                                                                             ch[i+1]='G';
                                                                              count[i]=1;                                                                                       
                                                                             }
                                                              else if(ch[i+1]=='G'){
                                                                             ch[i+1]='B';
                                                                              count[i]=1;   
                                                                   }
                                                              }
                                                              
                                               if(ch[i]=='B'){
                                                              if(ch[i+1]=='R'){
                                                                             ch[i+1]='G';
                                                                             count[i]=1;
                                                                             }
                                                              else if(ch[i+1]=='G'){
                                                                             ch[i+1]='R';
                                                                                 count[i]=1;
                                                                   }
                                                              }
                                                              
                                               if(ch[i]=='G'){
                                                              if(ch[i+1]=='B'){
                                                                             ch[i+1]='R';
                                                                             count[i]=1;
                                                                             }
                                                              else if(ch[i+1]=='R'){
                                                                             ch[i+1]='B';
                                                                             count[i]=1;   
                                                                   }
                                                              }
                                               }
                            else{
                                 count[i]=0;
                                 }
                                          }
                    int count1=0;
                    for(int i=0;i<N;i++){
                            if(count[i]!=1){
                                          count1++;  
                                            }
                            }        
                    cout<<count1<<endl;
                    }
               }
    system("pause");
    return 0;
    }
