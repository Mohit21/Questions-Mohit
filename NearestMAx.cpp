#include<iostream>
#define max 50
using namespace std;

int stack[max],top=-1;

void push(int a){
     if(top==-1){
                 stack[++top]=a;
                 }
     else{
          stack[++top]=a;
          }
     }
     
int main(){
    int n,a,ans[max],k=0,j,l,m=0;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>a;
            push(a);
            }
    for(int i=0;i<=top;i++){
            j=i+1;
            l=0;
            while(j<=top){
                         if(stack[j]>stack[i]){
                                               if(l==0){
                                                        ans[k]=stack[j];
                                                        k++;
                                                        l++;
                                                        }
                              }           
                         j++;
                         }
            
                  if(l==0&&j-1==top){
                              ans[k]=-1;k++;
                                   }
            }
            
            cout<<"\n";
    while(m<k){
              cout<<ans[m]<<endl;
              m++;
              }
    system("pause");
    return 0;
    }

