#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
            long long N,n;
            cin>>N;
            long long count[100000];
            memset(count,0,sizeof(count));
            for(long i=0;i<N;i++){
                cin>>n;
                count[n-1]++;
            }
            for(int i=0;i<100000;i++){
                if(count[i]%2!=0){
                        cout<<i+1<<endl;
                }
            }
        }
    return 0;
    }
