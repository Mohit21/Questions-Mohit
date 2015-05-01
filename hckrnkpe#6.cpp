#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    long int diff[10000],t,n,sum,i,l,k=0,sum1;
    cin>>t; 
    while(t!=0){
                cin>>n;
                sum=0;
                sum1=0;
                for(i=1;i<=n;i++){
                        sum+=i;
                        }
                        sum*=sum;
                for(i=1;i<=n;i++){
                                sum1=sum1+(i*i);
                                }
                  diff[k]=sum-sum1;        
                  k++;
        t--;
    }
    l=0;
   while(l<k){
       cout<<diff[l]<<endl;
       l++;
   }   
   
    system("pause");
    return 0;
}
