#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main(){
    int T;
    long long N;
    cin>>T;
    while(T--){
            cin>>N;
            int A[N],B[N];
            for(int i=0;i<N;i++){
                  cin>>A[i];
                  }
            for(int i=0;i<N;i++){
                  cin>>B[i];
                  }
            long long count=0;
            for(int i=0;i<N;i++){
                    if(i==0){
                             if(A[i]>=B[i]){
                                           count++;
                                           }
                             }
                    else{
                         if((A[i]-A[i-1])>=B[i]){
                                                count++;
                                                }
                         }
                    }
            cout<<count<<endl;
                    }
    system("pause");
    return 0;
    }
