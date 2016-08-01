#include<bits/stdc++.h>

using namespace std;
long long getsize(long long val){
    return (val<100?2:(val<1000?3:(val<10000?4:1)));
}
int main(){
long long N;
cin>>N;
long long A[N];
long long val=0;
for(long long i=0;i<N;i++){
    ++val;
    if(val>9){
        long long j=val,size1,div1=1;
        size1=getsize(val);
        for(int k=1;k<size1;k++){
                div1=div1*10;
        }
        while(div1!=0){
            A[i++]=j/div1;
            j%=div1;
            div1/=10;
            if(i==N){
                //cout<<i;
                break;
            }
        }
        i-=1;
    }
    else{
            A[i]=val;
    }
}
cout<<A[N-1];
return 0;
}
