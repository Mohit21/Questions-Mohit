#include<iostream>

using namespace std;

void findOddOne(int A[],int l,int r){
    int mid;
    if(l==r){
             cout<<A[l]<<endl;
             return;
             }      
    mid=(l+r)/2;         
    if(mid%2==0){
                 if(A[mid]==A[mid+1]){
                                      findOddOne(A,mid+2,r);
                                      }             
                 else{
                      findOddOne(A,l,mid);
                      }
                 }
    else{
                 if(A[mid]==A[mid-1]){
                                      findOddOne(A,mid+1,r);
                                      }             
                 else{
                      findOddOne(A,l,mid-1);
                      }
    }
    }
int main(){
    int A[]={1, 1, 2, 2, 1, 1, 2, 2, 13, 1, 1, 40, 40, 13, 13},m;
    m=sizeof(A)/sizeof(A[0]);
    cout<<"The Element with Odd Ocurrence:";
    findOddOne(A,0,m-1);
    system("pause");
    return 0;
    }
