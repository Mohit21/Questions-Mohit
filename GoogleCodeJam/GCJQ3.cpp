#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;


int main(){
    int N,J;
    int T,T1=0;
    cin>>T;
    while(T--){
               cin>>N;
               cin>>J;
               int k,b;
               long long int num=1,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
               long long int A[9];
               int ans[9];
               cout<<"Case #"<<++T1<<": "<<endl;
               for(int i=0;i<J;i++){
                       for(int j=0;j<N-1;j++){
                               num*=pow((double)10,(double)i+1);
                               }
                               num+=1;
                               num1=num;
                               b=0;
                               k=0;
                               num2=0;num3=0;num4=0;num5=0;num6=0;num7=0;num8=0;num9=0;num10=0;
                               while(num1!=0){
                                              b=num1%10;
                                              num2+=pow(double(2*b),(double)k);num3+=pow((double)(3*b),(double)k);num4+=pow((double)(4*b),(double)k);
                                              num5+=pow((double)(5*b),(double)k);num6+=pow((double)(6*b),(double)k);num7+=pow((double)(7*b),(double)k);
                                              num8+=pow((double)(8*b),(double)k);num9+=pow((double)(9*b),(double)k);
                                              num10=num;
                                              num1=num/10;
                                              k++;
                                       }
                               A[0]=num2;A[1]=num3;A[2]=num3;A[3]=num4;A[5]=num4;A[6]=num5;A[7]=num6;A[7]=num8;A[8]=num9;A[9]=num10;
                               int flag1=0;
                               for(int i=0;i<9;i++){
                                       int flag=0;
                                       long long int sroot=sqrt(A[i]);
                                       for(long long int m=2;m<=sroot;m++){
                                                if(A[i]%m==0){
                                                              flag=1;
                                                              break;
                                                              }
                                                else{
                                                     flag=0;
                                                     }
                                                }
                                       if(flag==1){
                                                   flag1=1;
                                                   break; 
                                                    }
                                       }
                             if(flag1==0){
                                         continue;
                                         }
                             else{
                                  int k1=0;
                                  for(int i=0;i<9;i++){
                                          while(A[i]%2==0 || A[i]%3==0){
                                                           if(A[i]%2==0){
                                                                         A[i]/=2;
                                                                         }
                                                           else if(A[i]%3==0){
                                                                A[i]/=3;
                                                                }
                                                           }        
                                           ans[k1++]=A[i];                                  
                                          }
                                  }         
                       cout<<num<<" ";
                       for(int i=0;i<9;i++){
                               cout<<ans[i]<<" ";
                               }
                       }
                       cout<<endl; 
               }    
    
    system("pause");
    return 0;
    }
