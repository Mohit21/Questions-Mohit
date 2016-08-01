#include<bits/stdc++.h>

using namespace std;

int main(){
    int A;
    cin>>A;
    vector<bool> prime;
    for(long long i=0;i<=A;i++){
        prime[i]=true;
    }
    cout<<A+1;

    prime[0]=false;
    prime[1]=false;
    for(long long i=2;i*i<=A;i++){
        if(prime[i]==true){
            for(long long j=i*i;j<=A;j+=i){
                prime[j]=false;
            }
        }
    }
    vector<int> v,res;
    v.clear();
    res.clear();
    for(long long i=2;i<=A;i++){
        if(prime[i]==true){
            v.push_back(i);
        }
    }
    int k=0;
    for(long long i=0;i<v.size();i++){
        for(long long j=0;j<v.size();j++){
            if(A==(v[i]+v[j]) && k==0){
                res.push_back(v[i]);
                res.push_back(v[j]);
                k++;
                break;
            }
        }
    if(k>0){
        break;
        }
    }
    cout<<"-->"<<res[0]<<" "<<res[1]<<endl;
    return 0;
}
