#include<iostream>

using namespace std;

int main(){
    long unsigned int palin1[10000],t,n,n1,n2,a,b,c,i1,r,i,j=100,k=0,palin,l=0,p=0,q;
    long int factor[10000];
    cin>>t;
    while(t!=0){
                fflush(stdin);
                cin>>n;
                p=0;
                for(i=100;i<=(int)(n/2);i++){
                                    if(n%i==0){
                                                         //cout<<"\nq==2";
                                                         factor[p]=i;
                                                         p++;
                                                         //cout<<"\ni="<<i<<"\n";
                                                         
                                                }
                                    else{
                                         continue;
                                         }
                                    }
                n2=factor[p-1];                    
                cout<<"\nn2="<<n2;
                for(i=100;i<n2;i++){
                                    while(j<n2){
                                                      n1=(i)*(j);             
                                                               //cout<<"\nh1";
                                                               a=n1;
                                                               c=0;
                                                               while(a!=0){
                                                                           
                                                                           b=a%10;
                                                                           c=c*10+b;
                                                                           a=a/10;
                                                                           }
                                                               if(c==n1){cout<<"\nh1";
                                                                          palin=n1;
                                                                           }
                                                               else
                                                                   continue;     
                                                      j++;
                                                      }
                                    }
                                 palin1[k]=palin;
                                 k++;
                
                t--;
                }
    while(l<j){
            cout<<palin1[l]<<endl;l++;
            }
    system("pause");
    return 0;
    }
    
    
    
