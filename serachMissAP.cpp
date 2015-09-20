#include<iostream>

using namespace std;

int diff;
int commonDiff(int A[],int l,int r){
    int n=l+r+1;
    return ((A[r]-A[l])/n);
    }
int findMissAP(int A[],int l,int r){
    int pos=-1;
    diff=commonDiff(A,l,r);
    for(int i=l;i<r;i++){
            if(A[i+1]-A[i]!=diff){
                                  pos=i;
                                  }
            } 
   return pos;
   }
int main(){
    int A[]={1, 6, 11, 16, 21, 31},m,pos;
    m=sizeof(A)/sizeof(A[0]);
    pos=findMissAP(A,0,m-1);
    if(pos==-1){
                cout<<"\nNo missing Number in the AP";
                }
    else{
         cout<<"\nThe missing number in th AP is:"<<A[pos]+diff<<endl;
         } 
    system("pause");
    return 0;
    }
