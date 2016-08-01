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
    int T;
    cin>>T;
    while(T--){
            int i,N;
            long win=-1;
            cin>>N;
            string str,str1;
            cin>>str>>str1;
            long W[N+1];
            for(i=0;i<N+1;i++){
                  cin>>W[i];
                  }
            i=0;
            while(str[i]!='\0'){
                    if(str[i]==str1[i]){
                                       win=W[i];               
                                       }
                    i++;
                    }
            if(win!=-1){
                        cout<<win;
                        }
            else{
                 win=W[0];
                 cout<<win;
                 }
            cout<<endl;
            }
    system("pause");
    return 0;
    }

