//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
long long int N,E;
cin>>N;
long long int A[N+1];
vector<long long int> v;
vector<long long int>::iterator it;
for(int i=1;i<=N;i++){
    cin>>A[i];
}
E=0;
long long int N1=1,N2=0,k=0,diff=0;
for(long long int i=1;i<=N;i++){
        if(i==1){
                 cout<<0<<" ";
                 }
        else{
             if(i+1==A[i] && i!=A[i]){
                            E=1;
                            v.push_back(A[i]);
                            //cout<<E<<" ";
                    }
                else{
                        //E=0;
                        if(v.size()==0){
                                N1=i;
                                diff=abs(i-(--N1));
                                E+=diff;
                        }
                        else{
                                E=0;
                                N2=i;
                                for(it=v.begin();it!=v.end();it++){
                                    if(*it>N2){
                                        break;
                                    }
                                    else{
                                        E+=(1+(N2-*it));
                                        N2-=*it;
                                    }
                                }
                            }
                        cout<<E<<" ";
                        }
             }
        }
system("pause");
return 0;
}
