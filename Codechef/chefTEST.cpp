#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> V;
    vector<int>::iterator it;
    int n;
    while(1){
             cin>>n;
             if(n==42){
                      break;
                      }
             else{
                  V.push_back(n);
                  }
             }
    for(it=V.begin();it!=V.end();it++){
                                       cout<<*it<<endl;
                                       }
    system("pause");
    return 0;
    }
