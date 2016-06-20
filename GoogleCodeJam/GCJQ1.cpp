#include<iostream>

using namespace std;

int main(){
    long long int N,N1,prev,ans;
    int T,T1=0;
    int visited[10],count,flag=0;
    cin>>T;
    while(T--){
               cin>>N;
               memset(visited,0,sizeof(visited));
               count=0;
               flag=0;
               for(int i=1;i>=1;i++){
                       N1=i*N;
                       prev=N;
                       while(N1!=0){
                                    if(visited[N1%10]==0){
                                                          visited[N1%10]=1;
                                                          
                                                          count++;
                                                       }
                                    N1/=10;
                       }
                       if(count==10){
                                     ans=i*N;
                                     break;
                                    }
                       else if(prev==N && N==0){
                                  flag=1;
                                  break;
                                  }
                       }
               if(flag==1){
                           cout<<"Case #"<<++T1<<": INSOMNIA"<<endl; 
                           }
               else {
                    cout<<"Case #"<<++T1<<": "<<ans<<endl; 
                    }
               }    
    
    system("pause");
    return 0;
    }
