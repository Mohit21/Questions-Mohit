#include<iostream>
#include<sstream>
#include<algorithm>
#include<cstring>

using namespace std;
 
void getFac(int n){
    int m,temp,x;
    int a[100000]; 
    a[0]=1;  
    m=1;    
    temp = 0;
    x=0; 
       for(long long i=1;i<=n;i++)
       {
            for(int j=0;j<m;j++)
            {
               x = ((a[j]*i)+temp); 
               a[j]=x%10; 
               temp = x/10; 
            }
             for(;temp>0;temp/=10) 
             { 
               a[m]=temp%10;
               m++; 
             }
       }
    for(int i=m-1;i>=0;i--) 
              cout<<a[i];
    }
 
int main(){
int t,n;
long long fac=1;
cin>>t;
while(t--){
           fac=1;
	cin>>n;
	getFac(n);
    cout<<endl;
}
system("pause");
return 0;
}
   
    
