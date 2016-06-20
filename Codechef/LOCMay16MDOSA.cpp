#include<iostream>
#include<cmath>
#include<string.h>
#include<cstring>
#include<algorithm> 
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--){
               string str;
               cin>>str;
               int size1=str.size();
               if((str[size1-1])%2==0){
                               cout<<"YES";
                               }
               else{
                    cout<<"NO";
                    }
               cout<<endl;
            }
    system("pause");
    return 0;
}
 
