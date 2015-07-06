/*
Pythagorean Triplet in an array
Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,flag=0,a=0,b=0,c=0;
    int A[50];
    cout<<"\n\n\t\t           Pythagoras Triplet!!";
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>A[i];
            }
   for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){                   
                               for(int k=j+1;k<n;k++){
                                          a=A[i]*A[i];
                                          b=A[j]*A[j];
                                          c=A[k]*A[k];
                                          if(a==(b+c) || b==(a+c) || c==(a+b)){
                                                               flag=1;
                                                               break;
                                                               }
                                          }
                   }
           }
           
   if(flag==1){
               cout<<"\nPythagoras triplet present!!";
                }
    else if(flag==0){
         cout<<"\nPythagoras triplet not present!!";
         }
    system("pause");
    return 0;
    }
