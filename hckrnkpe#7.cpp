#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    long int prime1[10000],t,n,i,k=0,l,prime;
    cin>>t; 
    while(t!=0){
                cin>>n;
                prime=2;
                if(n>=1){
                         for(i=1;i<n;i++){
                                          if(i==1){
                                                   prime+=1;
                                                  }
                                          else if(i>1&&i<=2){
                                               prime+=2;
                                               }
                                          else if(i>2&&i<=8){
                                               if(i%2==0){
                                                          prime+=4;
                                                          }
                                               else{
                                                    prime+=2;
                                                    }
                                               }
                                          else if(i==9){
                                               prime+=6;
                                               }
                                          else if(i==10){
                                               prime+=2;
                                               }
                                          else {
                                               if(i%2==0){
                                                          prime+=4;
                                                          }
                                               else{
                                                    prime+=6;
                                                    }
                                               }
                                           }
                         }
                else{
                     break;
                     }                 
                prime1[k]=prime;
                k++;
                t--;
                }
    l=0;
    while(l<k){
               cout<<prime1[l]<<endl;
               l++;
               }
    system("pause");
    return 0;
}
