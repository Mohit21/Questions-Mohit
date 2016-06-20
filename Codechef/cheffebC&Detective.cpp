#include<iostream>
#include<cstring>
using namespace std;
int main(){
    long long N;
    cin>>N;
    int A[N];
    for(long long i=0;i<N;i++){
             cin>>A[i];
             }
             cout<<endl<<endl;
    int count[N];
    memset(count,0,sizeof(count));
    for(long long i=0;i<N;i++){
             if(A[i]==0){
                         continue;
                         }
             else{
                  A[i]-=1;
                  count[A[i]]++;
                  }
             }
    for(long long i=0;i<N;i++){
             if(count[i]==0){
                             cout<<i+1;
                             }
             }
    system("pause");
    return 0;
    }
