#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

bool isPrime(long long N){
     int count=0,flag=1;
     for(int i=2;i<sqrt(N);i++){
           if(N%i==0){
                      count=0;
                     for(int j=2;j<i;j++){
                           if(i%j==0){
                                count++;
                                }
                           }
                           if(count==1){
                                flag=0;
                                break;
                                }
                       if(flag=0){
                                  break;
                                  }  
                      }
           }
     if(flag==0){
                 return true;
                 }
     return false;
     }

int main(){
    int T,count;
    cin>>T;
    while(T--){
            long long N;
            cin>>N;
            count=0;
            if(N==1){
                 cout<<"hello";
                 cout<<"Chef";    
                     }
            else{ 
                while(N!=0){
                            ++count;
                            if(isPrime(N)){
                                           break;
                                           }
                            N-=1;
                          }
                if(count%2==0){
                     cout<<"Misha";
                     }
                else{
                     cout<<"Chef";
                     }
                }
            cout<<endl;
            }
    system("pause");
    return 0;
    }
