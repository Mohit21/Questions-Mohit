#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(){
  long long T,T1=0;
  cin>>T;
  while(T--){
          long long N,Q,sum1=0;
          vector<long long > v;
          vector<long long >::iterator it;
          set<long long > s;
          set<long long >::iterator its;
          cin>>N>>Q;
          long long A[N];
          for(long long i=0;i<N;i++){
                cin>>A[i];
                sum1+=A[i];
                v.push_back(A[i]);
                s.insert(A[i]);
                }
          long long size=0;
          for(its=s.begin();its!=s.end();its++){
                           A[size]=*its;
                           size++;                    
                }
          N=size;
          long long L,R,K,count,x,copy[N],sum,chal=0;
          for (long long i = 0; i < N; i++){   
           copy[i]=A[i];
          }
          K=2;
          long long i1=0;
          while(K<=N){
                    for(long long i = 0; i <N; i++){
                      for(long long j = i + 1; j < N; j++)
                      {
                        count = 1;
                        if ((N - j) >= (K - 1)){
                          i1=0;
                          x = j;
                          sum = A[i];
                          while (count<K){
                            count++;
                            sum += copy[x];
                            x++;
                          }
                          
                        if(i1==0){
                                  v.push_back(sum);
                                  i1++;
                             }
                        
                          }  
                      }
                      //v.push_back(sum);
                          
                    }
                    //v.push_back(sum);
                          
                    K++;
                  }
          //v.push_back(sum1);
          sort(v.begin(),v.end());
          cout<<endl;
          cout<<endl;
          for(it=v.begin();it!=v.end();it++){
                cout<<" "<<*it<<" ";
                }
          
          cout<<endl;
          cout<<endl;
          cout<<"Case #"<<++T1<<": "<<endl;
          for(long long i=0;i<Q;i++){
                cin>>L>>R;
                long long ans=0;
                for(long long i=L-1;i<R;i++){
                         ans+=v[i];
                         }
                cout<<ans<<endl;
                }      
          v.clear();
          }
  
  system("pause");
  return 0;
  }
  
