#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T,N;
    cin>>T;
    while(T--){
               cin>>N;
               int Wi[N],Ti[N];
               for(int i=0;i<N;i++){
                       cin>>Wi[i];
                       }
               for(int i=0;i<N;i++){
                       cin>>Ti[i];
                       }
               for(int i=0;i<N;i++){
                       Wi[i]=(Wi[i]*3)+Ti[i];
                       }
               sort(Wi,Wi+N);
               cout<<Wi[N-1]<<endl;                   
               }
    system("pause");
    return 0;
    }
