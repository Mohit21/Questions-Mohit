/*
Find the largest pair sum in an unsorted array
Given an unsorted array, find the largest pair sum in it.
*/

#include<iostream>
#include<cmath>

using namespace std;


int main(){
    cout<<"\n\n\t\tLargest Pair Sum in an Unsorted Array!";
    int n,A[50],firstMax,secondMax;
    cin>>n;
    for(int i=0;i<n;i++){
           cin>>A[i]; 
            }
    firstMax=A[0];
    for(int i=0;i<n;i++){
            if(A[i]>=firstMax){
                  secondMax=firstMax;
                  firstMax=A[i];
                  }      
            }
    cout<<"\nThe Largest pair is: "<<firstMax<<"  "<<secondMax;
    cout<<"\nThe Largest sum is:"<<(firstMax+secondMax);
            system("pause");
            return 0;
    }
