#include<iostream>
#include<sstream>
#include<algorithm>
#include<cstring>
#include<string>
#define num 1000000007
using namespace std;
 
int getfrst(long long F[],long long N,long long i1,long long R){
    long long m,temp,x,pos;
    long long a[1000000]; 
    a[0]=1;  
    m=1;    
    temp = 0;
    x=0; 
       for(long long i=0;i<=i1;i++)
       {
            pos=1+(i*R);
            for(long long j=0;j<m;j++)
            {
               x = ((a[j]*F[pos-1])+temp); 
               a[j]=x%10; 
               temp = x/10; 
            }
             for(;temp>0;temp/=10) 
             { 
               a[m]=temp%10;
               m++; 
             }
       }
    return a[m-1];
    }
    
    
int main(){
    long long N,enj,Q,n,p,f,R,i1,pos;
    int frst;
    cin>>N;
    long long F[N+1];
    for(long long i=0;i<N;i++){
             cin>>F[i];
             }
    cin>>Q;
    for(int i=0;i<Q;i++){
            cin>>n;
            if(n==1){
                     cin>>p>>f;
                     F[p-1]=f;
                     }
            else if(n==2){
                 cin>>R;
                 i1=((N-1)/R);
                 enj=1;
                 for(int i=0;i<=i1;i++){
                         pos=1+(i*R);
                         enj=((enj%num)*(F[pos-1]))%num;
                         } 
                 frst=getfrst(F,N,i1,R);                
                 cout<<frst<<" "<<(enj%num)<<endl;
                 }
            }
   system("pause");
    return 0;
    } 
