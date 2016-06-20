#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int T,N;
    cin>>T;
    while(T--){
               cin>>N;
               long long A[N],B[N]; 
               for(int i=0;i<N;i++){
                       cin>>A[i];
                     }
               for(int i=0;i<N;i++){
                       cin>>B[i];
                     }
               long long count=0,sub=0;
               for(int i=0;i<N;i++){
                       if(i==0){
                                A[i]-=0;
                                if(A[i]>=B[i]){
                                               count++;
                                               }
                                }
                       else{
                                sub=abs(A[i]-A[i-1]);
                                if(sub>=B[i]){
                                               count++;
                                               }
                            }
                     }
            cout<<count<<endl;
            }
    system("pause");
    return 0;
    }
