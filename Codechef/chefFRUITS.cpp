#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
            int N,M,K;
            cin>>N>>M>>K;
            if(N>M){
                    while(N>M && K>0){
                            ++M;
                            K--;
                            }
                    while(K>0 && K%2==0){
                            ++M;++N;
                            K/=2;
                            }
                    cout<<abs(M-N);
                 }
            else if(M>N){
                    while(M>N && K>0){
                            ++N;
                            K--;
                            }
                    while(K>0 && K%2==0){
                            ++M;
                            ++N;
                            K/=2;
                            }
                    cout<<abs(M-N);
                 }
            else{
                 while(K%2==0){
                            ++M;
                            ++N;   
                            K/=2;
                            }
                 cout<<abs(M-N);
                 }
            cout<<endl;
            }
    system("pause");
    return 0;
    }
