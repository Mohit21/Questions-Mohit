#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
 
using namespace std;
 
int main(){
    int T,N;
    cin>>T;
    while(T--){
               cin>>N;
               int A[N]; 
               int flag=-1;
               vector<int> v;
               vector<int>::iterator it;
               for(int i=0;i<N;i++){
                       cin>>A[i];
                       if(A[i]>0){
                                  flag=0;
                                  }
                       }
               if(flag==-1){
                    int max=A[0];
                    for(int i=1;i<N;i++){
                            if(max<A[i]){
                                         max=A[i];
                                         }
                          }
                    cout<<max;
                    }
               else{
                    int  maxFar = 0, maxEnd = 0;
                    for (int i = 0; i < N; i++)
                    {
                       maxEnd = maxEnd + A[i];
                       v.push_back(A[i]);
                       if (maxEnd < 0){
                                           maxEnd = 0;
                                           v.clear();
                                           }
                       if (maxFar < maxEnd)
                                      maxFar = maxEnd;    
                   }
                   int min=0;
                   it=min_element(v.begin(),v.end());   
                   if(it!=v.end()){
                                  min=*it;
                                 }
                   else{
                   min=0;
                   }
                   int maxFar1=maxFar;
                   if(min<0){
                            maxFar1+=abs(min);
                         }
                   if(maxFar1>maxFar){
                                    maxFar=maxFar1;
                                   }
                   cout<<maxFar;
                    }
               cout<<endl;    
               v.clear();
            }
    system("pause");
    return 0;
}
 
