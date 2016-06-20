#include<iostream>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<cstring>
#include<vector>

using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--){
               string X,Y;
               cin>>X;
               cin>>Y;
               long long size1=X.size();
               vector<char> v;
               vector<char>::iterator it;
               for(int i=0;X[i]!='\0';i++){
                       if(X[i]=='W'){
                                      if(X[i]==Y[i]){
                                                     v.push_back('B');               
                                                     }
                                      else{
                                           v.push_back('B');
                                           }
                                      }
                       else if(X[i]=='B'){
                                           if(X[i]==Y[i]){
                                                     v.push_back('W');               
                                                     }
                                           else{
                                                v.push_back('B');
                                                }
                            }
                       }
               for(it=v.begin();it!=v.end();it++){
                                                  cout<<(*it);
                                                  }
               v.clear();
               cout<<endl;
            }
    system("pause");
    return 0;
}
 
