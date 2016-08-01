#include<bits/stdc++.h>

using namespace std;

int binarySearch(int A[],int beg,int end,int item){
int mid,pos=-1;
for(int i=beg;i<end;i++){
    mid=(beg+end)/2;
    if(item==A[mid]){
        pos=mid;
        break;
    }
    else if(item>A[mid]){
        beg=mid+1;
    }
    else if(item<A[mid]){
        end=mid-1;
    }
}
return pos;
}

int main(){
int A[]={0,1,2,3,4,5,6,7,8,9},x,pos,N;
N=sizeof(A)/sizeof(A[0]);
for(int i=0;i<N;i++){
    cout<<"-->"<<A[i];
}
cout<<endl;
cout<<"\nEnter the Element to be searched:";
cin>>x;
pos=binarySearch(A,0,N,x);
if(pos<N){
    cout<<"\nElement "<<x<<" at "<<pos+1<<" is found";
}
else{
        cout<<"\nElement "<<x<<" is not found";
}
return 0;
}
