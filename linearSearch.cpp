#include<bits/stdc++.h>

using namespace std;

int linearSearch(int A[],int N,int item){
int pos;
for(int i=0;i<N;i++){
    if(item==A[i]){
        pos=i;
        break;
    }
    else{
        pos=-1;
    }
}
return pos;
}

int main(){
int A[]={9,8,2,0,4,1,5,7,3,6},x,pos,N;
N=sizeof(A)/sizeof(A[0]);
for(int i=0;i<N;i++){
    cout<<"-->"<<A[i];
}
cout<<endl;
cout<<"\nEnter the Element to be searched:";
cin>>x;
pos=linearSearch(A,N,x);
if(pos!=-1){
    cout<<"\nElement "<<x<<" at "<<pos+1<<" is found";
}
else{
        cout<<"\nElement "<<x<<" is not found";
}
return 0;
}
