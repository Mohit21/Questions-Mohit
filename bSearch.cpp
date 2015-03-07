#include<iostream>
#include<stdio.h>
#include<dos.h>

using namespace std;

int bSearch(int a[],int beg,int end,int n){
    int mid,pos1;
 
    if(beg<end){
    mid=(int)((beg+end)/2);

    if(a[mid]>n){
                 bSearch(a,mid+1,end,n);
                 }
    else if(a[mid]<n){
                      bSearch(a,beg,mid-1,n);
         }
    else if(a[mid]==n){
         pos1=mid;
         }
         }
    return pos1;
    }
    
int main(){
     system("cls");
     int a[20],size,pos=0,n;
     cout<<"\nEnter the size of the array:";
     cin>>size;
     cout<<"\nEnter the array elements";
     for(int i=0;i<size;i++){
             fflush(stdin);
             cin>>a[i];
             }
     cout<<"\nThe array u entered:";
     for(int i=0;i<size;i++){
             cout<<"-->"<<a[i];
             }
     cout<<"\nEnter the number to be searched:";
     fflush(stdin);
     cin>>n;
     pos=bSearch(a,0,size-1,n);
           if(pos==0){
                cout<<"\nNumber not found!!";
                }
     else{
          cout<<"\nThe Number "<<n<<" is found at "<<pos+1<<" position";
          }
     system("pause");
     return 0;
     }
