#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
               long long N,a=1,d=2;
               cin>>N;
               if(N%2==0)
                         N-=1;
               N-=a;
               N/=d;
               N+=1;
               cout<<N<<endl;
            }
    system("pause");
    return 0;
    }
