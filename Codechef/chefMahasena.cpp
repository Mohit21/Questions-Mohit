#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main(){
    int T;
    long long N;

            cin>>N;
            int A[N],B[N];
            for(int i=0;i<N;i++){
                  cin>>A[i];
                  }
            long long counte=0,counto=0;
            for(int i=0;i<N;i++){
                             if(A[i]%2==0){
                                           counte++;
                                           }
                             else{
                                  counto++;
                                  }
                    }
            if(counte>counto){
                           cout<<"READY FOR BATTLE"<<endl;     
                 }
            else{
                 cout<<"NOT READY"<<endl;
                 }
    system("pause");
    return 0;
    }
