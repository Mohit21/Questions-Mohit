#include<iostream>
#include<cmath>

using namespace std;

struct node{
       int info;
       node *next;
       }*head;
       
void insert(int n){
     node *temp;
     if(head==NULL){
                    head=new node;
                    head->info=n;
                    head->next=NULL;
                    temp=head;
                    }
     else{
          temp->next=new node;
          temp=temp->next;
          temp->info=n;
          temp->next=NULL;
          }
     
     }
     
     
void display(node *temp){
     while(temp!=NULL){
                       cout<<"-->"<<temp->info;
                       temp=temp->next;
                       }
     }
     
void swap(node *temp,int x,int y){
              
     }
     
int main(){
    //head=new node;
    head=NULL;
    int x,y;
    insert(10);
    insert(9);
    insert(12);
    insert(16);
    insert(19);
    insert(20);
    insert(21);
    insert(27);
    insert(30);
    cout<<"\nThe linked List is as follows"<<endl;
    display(head);
    cout<<"\nEnter the two numbers to be swapped:"<<endl;
    cin>>x;
    cin>>y;
    swap(head,x,y);
    display(head);
    system("pause");
    return 0;
    }
