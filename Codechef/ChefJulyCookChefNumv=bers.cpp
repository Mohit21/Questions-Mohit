#include<bits/stdc++.h>
using namespace std;

long long getsum(long long num){
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main(){
long long N;
cin>>N;
long long N1=N-2000;
if(N1<0){
    N1=1;
}
//cout<<endl<<N1<<endl;
long long sumF=0,sum1=0,sum2=0,sum3=0,count=0;
for(long long i=N1;i<N;i++){
    sum1=i;
    sum2=getsum(sum1);
    sum3=getsum(sum2);
    sumF=sum1+sum2+sum3;
    if(N==sumF){
       //cout<<i;
       count++;
    }
}
//cout<<endl;
cout<<count;
return 0;
}
