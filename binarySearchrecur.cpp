#include<bits/stdc++.h>

using namespace std;

int binarySearch(int A[],int beg,int end,int item){
int mid;
    if(beg<end){
        mid=(beg+end)/2;
        if(item==A[mid]){
            return mid;
        }
        else if(item>A[mid]){
            return binarySearch(A,mid+1,end,item);
        }
        else if(item<A[mid]){
            return binarySearch(A,beg,mid-1,item);
        }

    }
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
    cout<<"\nElement "<<x<<" at position "<<pos+1<<" is found";
}
else{
        cout<<"\nElement "<<x<<" is not found";
}
return 0;
}
