#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<set>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
            int N,M,a;
            vector<int> v,v1;
            vector<int>::iterator it,it1;
            set<int> s;
            cin>>N;
            for(int i=0;i<N;i++){
                  cin>>a;
                  v.push_back(a);
                  }
            cin>>M;
            for(int i=0;i<M;i++){
                  cin>>a;
                  v1.push_back(a);
                  }
            
            for(it=v.begin();it!=v.end();it++){
                  it1=find(v1.begin(),v1.end(),*it);
                  if(it1!=v1.end()){
                                    s.insert(*it);
                                    }
                  }
            if(s.size()==v1.size()){
                                    cout<<"Yes";
                                    }
            else{
                 cout<<"No";
                 }
            v.clear();
            v1.clear();
            s.clear();
            cout<<endl;
            }
    system("pause");
    return 0;
    }
