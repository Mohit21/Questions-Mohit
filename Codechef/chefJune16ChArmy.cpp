#include<iostream>
#include<vector>

using namespace std;

int main(){
    long long T;
    cin>>T;
    while(T--){
            long long K,N,mod,mod1,i,ans;
            cin>>K;
            vector<long long> v;
            vector<long long>::reverse_iterator rit; 
            v.clear();
            i=0;
            K-=1;
            ans=0;
            while(K!=0){
                        mod=K%5;
                        mod*=2;
                        v.push_back(mod);
                        K/=5;
                        }
                        for(rit=v.rbegin();rit!=v.rend();rit++){
                                          ans=ans*10+(*rit);
                                          }
                              cout<<ans<<endl;
            }
    system("pause");
    return 0;
    }
