#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int main(){
    int T,count;
    cin>>T;
    while(T--){
            long N,K,E,M,sum,m1,ans,req,ans1=0;
            cin>>N>>K>>E>>M;
            vector<int> s;
            s.clear();
            vector<int>::iterator it;
            for(int i=1;i<N;i++){
                    sum=0;
                    for(int j=1;j<=E;j++){
                            cin>>m1;
                            sum+=m1;
                            }
                            s.push_back(sum);
                    }
            sum=0;
            for(int i=1;i<E;i++){
                cin>>m1;
                sum+=m1;
            }
            sort(s.begin(),s.end());
            req=s[N-K-1];
            req+=1;
            ans=max(ans1,req-sum);
            if(ans<=M){
                            cout<<ans;
                            }
            else{
                 cout<<"Impossible";
                 }
            cout<<endl;
            }
    //system("pause");
    return 0;
    }
