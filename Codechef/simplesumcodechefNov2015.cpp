#include<iostream>

using namespace std;
int getGcd(int i,int n,int m){
                     if(i%m==0 && n%m==0){
                                          return m;
                                          }
                     else{
                          return getGcd(i,n,m-1);
                          }
    return m;
    }

int main(){
    int T,n,m,gcd,ans[100],k=0,sum,x;
    cin>>T;
    while(T--){
               cin>>n;
               sum=0;
               for(int i=1;i<=n;i++){
               /*
               if(n==1){
                        sum=1;
                        }
               else{
                    if(n%2!=0&&n!=2){
                               sum=(n*(n-1))+1;
                               }
                    else if(n%2==0&&n!=2){
                         sum=(n*(n-1))-1;
                         }
                    else{
                         sum=(n*(n-1))+1;
                         }
                    }*/
               /*for(int i=2;i<=n;i++){
                       int r;
                       m=n;
                       gcd=i;
                            while(gcd!=m){
                                          if(gcd>=m-1){
                                                       gcd=gcd-m;
                                                       }
                                          else{
                                               m=m-gcd;
                                               }
                                          }
                            sum+=(n/m);
                            }*/
                       /*while(m!=0){
                                   r=gcd%m;
                                   gcd=m;
                                   m=r;
                                   if(r==0){
                                            break;
                                            }
                                   }
                                   //cout<<"i:"<<i<<endl;
                       sum+=(n/gcd);*/
                        if(n==1){
                                 sum+=n;
                                 }
                        else if(i==n){
                             sum+=1;
                             }
                        else{
                             m=i;
                             /*gcd=0;
                             m=i;
                             for(int j=m;j>=1;j--){
                                     if(i%j==0 && n%j==0){
                                                gcd=j;
                                                break;
                                                }
                                    }
                             sum+=(n/gcd);*/
                             gcd=getGcd(i,n,m);
                             sum+=(n/gcd);
                             }
                             /*int r;
                             m=n;
                             gcd=i;
                             while(m!=0){
                                   r=gcd%m;
                                   gcd=m;
                                   m=r;
                                   if(r==0){
                                            break;
                                            }
                                   }*/
                                   //cout<<"i:"<<i<<endl;

                               }
                       //cout<<sum<<"\n";
               ans[k++]=(int)sum;
               }
    for(int i=0;i<k;i++){
          cout<<ans[i]<<endl;
          }
    //system("pause");
    return 0;
    }

