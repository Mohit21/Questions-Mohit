#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N,Q,A[100000],n;
    long long int t;
    vector<int> v;
    vector<int>::iterator it,it1;
    cin>>N;
    cin>>Q;
    for(int i=0;i<N;i++){
            cin>>n;
          v.push_back(n);
          }
    sort(v.begin(),v.end());
    while(Q--){
                     cin>>t;
                     it=v.begin();
                     it1=v.end();
                     it1--;
                     if(t>=*it && t<=*it1){
                                cout<<"Yes";
                                }
                     else{
                          cout<<"No";
                          }
    cout<<endl;
    }
    system("pause");
    return 0;
}
