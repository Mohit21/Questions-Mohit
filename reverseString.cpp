#include<iostream>
#include<cmath>
#define max 50
using namespace std;
int top=-1,len;
char stack[max];
void push(char ch){
     if(top==-1){       
                         stack[++top]=ch;
                         }
             else{
                  stack[++top]=ch;
                  }
             len=top;
     } 
char pop(){
     char ch;
     if(top>=0){
                ch=stack[top];
               --top;
               }     
     return ch;
     }

void reverseString(char ch[]){
     for(int i=0;ch[i]!='\0';i++){
             push(ch[i]);
             }
     for(int i=0;i<=len;i++){
             ch[i]=pop();
             }
     }
int main(){
    char ch[50];
    cout<<"\nEnter the String:\n";
    fflush(stdin);
    gets(ch);
    cout<<"\nThe string u entered is:\n";
    for(int i=0;ch[i]!='\0';i++){
            cout<<ch[i];
            }
    reverseString(ch);
    cout<<"\nThe string after reversal is:\n";
    for(int i=0;ch[i]!='\0';i++){
            cout<<ch[i];
            }
    system("pause");
    return 0;
    }
