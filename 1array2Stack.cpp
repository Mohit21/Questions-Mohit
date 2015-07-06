#include<iostream>
#include<cmath>
#define max 100
using namespace std;
int top=-1,top1=max-1,len,len1;
char stack[max];

void push(char ch){
     if(top==-1&&top1-top!=0){       
                         stack[++top]=ch;
                         }
             else{
                  stack[++top]=ch;
                  }
             len=top;
     } 
     
void push1(char ch){
     if(top1==max-1){       
                         stack[--top1]=ch;
                         }
             else{
                  stack[--top1]=ch;
                  }
             len1=top1;
     } 
     
char pop(){
     char ch;
     if(top>=0){
                ch=stack[top];
               --top;
               }     
     return ch;
     }

char pop1(){
     char ch;
     if(top<max){
                 ch=stack[top1];
                 ++top1;
               }     
     return ch;
     }


void stringStack(char ch[]){
     for(int i=0;ch[i]!='\0';i++){
             push(ch[i]);
             }
     for(int i=0;i<=len;i++){
             ch[i]=pop();
             }
     }


void stringStack1(char ch[]){
     for(int i=0;ch[i]!='\0';i++){
             push1(ch[i]);
             }
             len1=max-len1;
     for(int i=0;i<=len1;i++){
             ch[i]=pop1();
             }
     }

int main(){
    char ch[50],ch1[50];
    cout<<"\nEnter the Strings:\n";
    cout<<"\nstring 1:"<<endl;
    fflush(stdin);
    gets(ch);
    cout<<"\nstring 2:"<<endl;
    fflush(stdin);
    gets(ch1);
    cout<<"\nThe strings u entered is:\n";
    for(int i=0;ch[i]!='\0';i++){
            cout<<ch[i];
            }
    cout<<"  ";
    for(int i=0;ch1[i]!='\0';i++){
            cout<<ch1[i];
            }        
    stringStack(ch);
    stringStack1(ch1);
    cout<<"\nThe strings after moving to stack is:\n";
    cout<<"\nstring 1:"<<endl;
    for(int i=0;ch[i]!='\0';i++){
            cout<<ch[i];
            }
    cout<<"\nstring 2:"<<endl;
    for(int i=0;ch1[i]!='\0';i++){
            cout<<ch1[i];
            } 
                    
    system("pause");
    return 0;
    }
