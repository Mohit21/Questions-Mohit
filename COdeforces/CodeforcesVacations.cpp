#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long A[n];
    for(long long i=0;i<n;i++){
        cin>>A[i];
    }
    vector<int> v;
    v.clear();
    long long countv=0;
    int flag=0;
    for(long long i=0;i<n;i++){
        if(A[i]==0){
            v.push_back(2);
            countv++;
        }
        else if(A[i]==1){
            if(v.size()==0){
                v.push_back(1);
            }
            else{
                int x=v.back();
                if(x==1){
                    v.push_back(2);
                    countv++;
                }
                else if(x==2){
                    v.push_back(1);
                }
                else{
                    v.push_back(1);
                }
            }
        }
        else if(A[i]==2){
            if(v.size()==0){
                v.push_back(0);
            }
            else{
                int x=v.back();
                if(flag==1 && x==0){
                    v.push_back(0);
                    flag=0;
                }
                else if(x==0){
                    v.push_back(2);
                    countv++;
                }
                else if(x==1){
                    v.push_back(0);
                }
                else if(x==2){
                    v.push_back(0);
                }
            }
        }
        else if(A[i]==3){
            if(v.size()==0){
                flag=1;
                v.push_back(0);
            }
            else{
                int x=v.back();
                if(x==1){
                    v.push_back(0);
                }
                else if(x==0){
                    v.push_back(1);
                }
                else if(x==2){
                    flag=1;
                    v.push_back(0);
                }
            }
        }
    }
    cout<<countv;
    return 0;
}
