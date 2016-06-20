#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int getSum(int f1){
    if(f1<10) return f1;
    long long int res=0;
    while(f1!=0&&res<10){
                 res+=f1%10;
                 f1/=10;
                 if(res>10){
                            f1=res;
                            res=0;
                            }
                 }
    return res;
    }
int main(){
    long long int T,L,R,D,f,F,sum,f1,f2,f3,A[100],k=0;
    cin>>T;
    while(T--){
    cin>>f;
    cin>>D;
    cin>>L;
    cin>>R;
           sum=0;
           f1=0;        
           for(long long int i=L;i<=R;i++){
                   f1=f+((i-1)*D);
                   sum+=getSum(f1);
                   }
                   /*
                   if(f1<10){
                             sum+=f1;
                             }
                   else{
                        f2=f1;
                        F=0;
                                         while(f2!=0&&F<10){
                                         f3=f2%10;
                                         F+=f3;
                                         f2/=10;
                                         if(F>=10){
                                                   f2=F;
                                                   F=0;
                                                   }
                                         }
                        sum+=F;    
                        }
                   }*/
                   A[k++]=sum;
                   //printf("%d\n"sum);
               }
    for(int i=0;i<k;i++){
            cout<<A[i]<<endl;
            }
            
   system("pause");
    return 0;
    }
