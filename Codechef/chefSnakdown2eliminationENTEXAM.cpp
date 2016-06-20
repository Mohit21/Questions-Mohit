#include<iostream>
#include<algorithm>
#include<cmath>
#include<set>

using namespace std;

int main(){
    int T,count;
    cin>>T;
    while(T--){
            long N,K,E,M,sum,m1,m2;
            cin>>N>>K>>E>>M;
            set<int> s;
            set<int>::iterator it;
            int A[E];
            for(int i=0;i<N-1;i++){
                    sum=0;
                    for(int j=0;j<E;j++){
                            cin>>A[j];
                            sum+=A[j];     
                            }
                            s.insert(sum);
                    }
            cin>>m1>>m2;
            sum=m1+m2;
            N=N-K;
            it=s.end();
            while(N>0){
                        --it;
                        N--;
                        }
            if((*it)-sum<=M){
                            cout<<((*it)-sum+1);
                            }
            else{
                 cout<<"Impossible";
                 }
            cout<<endl;
            s.clear();
            }
    system("pause");
    return 0;
    }
