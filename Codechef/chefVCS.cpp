#include<iostream>
#include<algorithm>
#include<cmath>
#include<set>
#include<map>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int main(){
    int T,count;
    cin>>T;
    while(T--){
            long N,M,K;
            cin>>N>>M>>K;
            vector<int> v,v1;
            set<int> s;
            vector<int>::iterator it,it1;
            int a;
            for(int i=0;i<M;i++){
                    cin>>a;
                    v.push_back(a);
                    s.insert(a);
                    }
            for(int i=0;i<K;i++){
                  cin>>a;
                  v1.push_back(a);
                  s.insert(a);
                  }
            int counti=0;
            if(M>=K){
                    for(it=v.begin();it!=v.end();it++){
                            it1=find(v1.begin(),v1.end(),*it);
                            if(it1!=v1.end()){
                                             counti++;
                                             }
                            }
                    
                    }
            else{
                 for(it=v1.begin();it!=v1.end();it++){
                            it1=find(v.begin(),v.end(),*it);
                            if(it1!=v.end()){
                                             counti++;
                                             }
                            }
                    
                 }
            cout<<counti<<" "<<N-s.size();
            v1.clear();
            v.clear();
            s.clear();
            cout<<endl;
            }
    system("pause");
    return 0;
    }
