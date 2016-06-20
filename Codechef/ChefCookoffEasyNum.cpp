#include<iostream>
#include<vector>
#define num 1000000007
#define n 10

using namespace std;
vector<int> convert(long long b,long long d,long long n1){
     vector<int> v;
     v.clear();
     int mod;
     while(n1!=0){
             mod=n1%d;
             v.push_back(mod);
             n1/=d;
             }
     return v;
     
     }

int get(vector<int> b,long long d1){
     long long N=0;
     for(int i=b.size()-1;d1>0;i--){
                                            N*=10;        
                                            N+=b[i];
                                            d1--;
                                            }
                   return N;                 
     }

int main(){
int T,b;
long long d,N,d1;
cin>>T;
while(T--){
       cin>>b;
       cin>>d;
       vector<int> base;
       long long count=0;
       for(int i=1;i<n;i++){
                 base=convert(b,d,i);
                 d1=d;
                 if(base.size()<=d){
                                    N=0;
                                    int flag=-1;
                                    for(int i=1;i<=d;i++){
                                            N=get(base,i);
                                            if(N%i==0){
                                                  flag=0;
                                                  }
                                            else{
                                                 flag=1;
                                                 }                                           
                                            }
                                    if(flag==0){
                                                count=((count+1)%num);
                                                }
                                     }
                 else{
                      break;
                      }
             }
        cout<<count<<endl;
        }
system("pause");
return 0;
}
