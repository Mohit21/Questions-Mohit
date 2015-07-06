#include<iostream>
#include<set>
#include<vector>
using namespace std;

bool sumEqual(int A[],int n,int sum){
     int i,l=0,r=n;
     set<int> s;
     set<int>::iterator it;
     for(i=0;i<n;i++){
                          s.insert(A[i]); 
             }
     for(it=s.begin(),i=0;it!=s.end(),i<n;it++,i++){
                                        A[i]=*it;
                                      }
     while(l!=r){
     if(A[l]+A[r]==sum){
                        return true;
                        }
     else if(A[l]+A[r]>sum){
          //cout<<"\nh12";
          r--;
          }
     else if(A[l]+A[r]<sum){
          //cout<<"\nh13";
          l++;
          }  
             }
          return false;
     }
int main(){
    int A[]={11, 15, 26, 38, 9, 10},n,l,r,sum;
    n=sizeof(A)/sizeof(A[0]);
    //sum=16,25,35
    cin>>sum;
    if(sumEqual(A,n,sum)){
                 cout<<"\nPAIR EXISTS";
                 }
    else{
         cout<<"\nPair Does Not Exists";
         }
    system("pause");
    return 0;
    }
