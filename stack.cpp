#include<iostream>

using namespace std;

struct node{
       int info;
       node*next;
       }*top=NULL;
       
void push(int n){
     if(top==NULL){
                   top=new node;
                   top->info=n;
                   top->next=NULL;
                   }
     else{
          node *temp=new node;
          temp->info=n;         
          temp->next=top;
          top=temp;
          }
     }

void pop(){
     if(top==NULL){
                   cout<<"\nUnderflow!";
                   }
     else{
          node *temp=top;
          cout<<"\n";
          cout<<"The deleted element is-->"<<temp->info;
          temp=temp->next;
          top=temp;
          }
     }
          
void display(){
     node *temp=top;
     while(temp!=NULL){
                       cout<<"-->"<<temp->info;
                       temp=temp->next;
                       }
     }
     
int main(){
    system("cls");
    cout<<"\nStack Menu";
    cout<<"\nInsertion\n";
    push(2);
    push(3);
    push(4);
    push(8);
    push(9);
    push(10);
    cout<<"\nDeletion\n";
    pop();
    cout<<"\nDsiplay\n";
    display();
    system("pause");
    return 0;
    }
