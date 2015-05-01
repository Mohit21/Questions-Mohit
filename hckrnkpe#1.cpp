/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below N.

Sample Input
2
10
100

Sample Output
23
2318

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
int main() {
 system("cls");
 long unsigned int sum1[1000],t,n,sum,k=0,j=0,t1;
 cin>>t;
 t1=t;
 while(t!=0){
             cin>>n;
             sum=0;
             for(int i=1;i<=n;i++){
                     if(i%3==0){
                                sum+=i;
                                }
                     else if(i%5==0){
                          sum+=i;
                          }
                     else if(i%15==0){
                          sum-=i;
                          }
                     else{
                          continue;
                          }
                     }
                     sum1[k]=sum;
                     k++;
             t--;
             }
      while(j<k){
                   cout<<sum1[j]<<endl;
                   j++;
                   }       
 system("pause");   
    return 0;
}
*/

int main() {
 system("cls");
 unsigned long long int sum1[1000],i,t,n,sum,sum3,j=0,sum2,k=0,a1,a2,a3;
 cin>>t;
 while(t!=0){
             cin>>n;
             a1=0;
             a2=0;
             a3=0;
             sum=0;
             sum2=0;
             sum3=0;
             for(i=1;i<n;i++){
                              a1=(3+((i-1)*3));
                              if(a1>=n){
                                       break;
                                       }
                              else{
                                   sum=sum+a1;
                                   }
                              }
             for(i=1;i<n;i++){
                              a2=(5+((i-1)*5));
                              if(a2>=n){
                                       break;
                                       }
                              else{
                                   sum2=sum2+a2;
                                   }                 
                              }
             for(i=1;i<n;i++){
                              a3=(15+((i-1)*15));
                              if(a3>=n){
                                       break;
                                       }
                              else{
                                   sum3=sum3+a3;
                                   }                 
                              }
             sum=((sum+sum2)-sum3);
             sum1[k]=sum;
             k++;
             t--;
             }
      while(j<k){
                   cout<<sum1[j]<<endl;
                   j++;
                   }       
 system("pause");   
    return 0;
}
