#include<iostream>
#include<algorithm>
#include<cmath>
#include<set>
#include<map>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int main(){
    int T,count;
    cin>>T;
    while(T--){
            string X,Y;
            cin>>X>>Y;
            int flag=0;
            for(int i=0;X[i]!='\0';i++){
                  if(X[i]!=Y[i] && (X[i]!='?' && Y[i]!='?')){
                                 flag=-1;
                                 break;
                                 }
                  else if(X[i]=='?' || Y[i]=='?'){
                       continue;
                       }
                  }
            if(flag==-1){
                 cout<<"No";
                 }
            else{
                 cout<<"Yes";            
                 }
            cout<<endl;
            }
    system("pause");
    return 0;
    }
