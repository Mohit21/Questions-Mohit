#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
 
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--){
               int N,Q;
               vector<int> v;
               vector<int> ::iterator it;
               cin>>N;
               for(int i=0;i<4;i++){
                       cin>>Q;
                       v.push_back(Q);
                       }
               int A[N]; 
               int flag=-1;
               for(int i=0;i<N;i++){
                       cin>>A[i];
                       if(A[i]>0){
                                  flag=0;
                                  }
                       }
               if(flag==-1){
                    sort(A,A+N);
                    int max=0;
                    for(int i=N-1;i>=0;i--){
                            if(find(v.begin(),v.end(),A[i])==v.end()){
                                         max=A[i];
                                         break;
                                         }
                          }
                         cout<<max;
                    }
               else{
                    long long  maxFar = 0, maxEnd = 0;
                    int i1=0;
                    for (int i = 0; i < N; i++)
                    {
                       if(find(v.begin(),v.end(),A[i])!=v.end()){
                                       maxEnd=0;
                                       continue;
                                       }
                       else{
                            maxEnd = maxEnd + A[i];     
                            }
                       if (maxEnd < 0){
                                           maxEnd = 0;
                                           }
                            if(maxFar<maxEnd){
                                              maxFar=maxEnd;
                                              }         
                   }
                   cout<<maxFar;
                    }
               cout<<endl;    
            }
    system("pause");
    return 0;
}
 
