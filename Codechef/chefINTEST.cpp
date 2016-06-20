#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    long long count=0,n1;
    while(n--){
               cin>>n1;
               if(n1%k==0){
                           count++;
                           }  
               }
    cout<<count;
    system("pause");
    return 0;
    }
