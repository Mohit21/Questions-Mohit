#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int T,count;
    cin>>T;
    while(T--){
            long long N;
            cin>>N;
            count=0;
            if(N==1){
                 cout<<"Chef";    
                     }
            else{
                 if(N%6==0){
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
