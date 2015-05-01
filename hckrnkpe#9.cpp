#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int ans1[100000],ans,t,n,flag,i,a,b,c,k=0,l=0;
    cin>>t;
    while(t!=0){
                cin>>n;
                ans=0;
                flag=0;
                if(n>0){
                        for(i=0;i<n/2;i++){
                                         a=((2*i)-1);
                                         b=(2*i);
                                         c=((2*i)+1);
                                         if(i%2==0){
                                                     if(((a*a)+(b*b))==(c*c)){
                                                                  if((a+b+c)==n){
                                                                                 flag=1;
                                                                                 ans=(a*b*c);
                                                                                 }
                                                                               }
                                                                  }
                                                     }
                                                     
                        }
                else{
                     break;
                     }
                if(flag==0){
                         ans1[k]=-1;
                         k++;   
                            }
                else {
                     ans1[k]=ans;
                     k++;
                     }
                t--;
                }
    while(l<k){
               cout<<ans1[l]<<endl;
               l++;
               }
  system("pause");
  return 0;
}
