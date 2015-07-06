#include<iostream>
#define max 50

using namespace std;

int top=-1;
char stack[max]; 

void push(char a){
     if(top==-1){
                 stack[++top]=a;
                        }
     else{
          stack[++top]=a;
          }
     }

int pop(){
    int a;
          if(top!=-1){
                      a=stack[top];            
                      --top;
                      }
          return a;
     }
     
int checkBal(char ch1,char ch2){
    int flag=0;
    if(ch1=='(' && ch2==')'){
                           flag=1;                  
                           }
    else if(ch1=='{' && ch2=='}'){
         flag=1;
         }
    else if(ch1=='[' && ch2==']'){
         flag=1;
         }
    else{
         flag=0;
         }
         return flag;
         }
int main(){  
     int size,flag=0;
     char ch[max],a;
     cout<<"\nEnter the size for the array=";
     cin>>size;
     fflush(stdin);
     gets(ch);        
     for(int i=0;i<size;i++){
             if(ch[i]=='('||ch[i]=='['||ch[i]=='{'){
                                                    //cout<<"\nh1";
                                                    push(ch[i]);
                                                    }
             else if(ch[i]==')'||ch[i]=='}'||ch[i]==']'){
                  //cout<<"\nh11";
                  a=pop();
                  flag=checkBal(a,ch[i]);
                  //cout<<"\nflag"<<flag;
                  }
             if(flag==0){
                         break;
                         }
             }
     
     if(flag==1){
                cout<<"\nEqual";
                }
     else{
          cout<<"\nNot Equal";
          }
     system("pause");
     return 0;
     }
