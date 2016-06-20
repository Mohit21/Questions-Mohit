#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int t[n];
for(int i=0;i<n;i++){
cin>>t[i];
}
long long sum=0;
for(int i=0;i<n;i++){
sum+=t[i];
}
float a=(float)sum/2,b;
int a1=a;
b=a-a1;
if(b>=0.5){
          sum=sum/2;
          sum+=1;
          }
else{
     sum=sum/2;     
     }
cout<<sum;
system("pause");
return 0;
}
