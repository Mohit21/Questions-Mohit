#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int ans[10000],t,j,i1,i,n,n1,k=0,l=0;
    cin>>t;
    while(t!=0){
        cin>>n;
        j=1;
        //k=0;
        i=1;
            while(i<=n){
                        for(int m=1;m<=n;m++){
                                if(j%m==0){
                                           
                                           n1=j;
                                           }
                        else{
                             j++;
                             }
                                           }
                         //cout<<"\nj"<<j;
                         i++;
                         } 
        ans[k]=n1;
        k++;
        t--;
    }
   l=0;
   while(l<k){
       cout<<ans[l]<<endl;
       l++;
   }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    system("pause");
    return 0;
}
