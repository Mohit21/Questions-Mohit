/*
Pairwise swap elements of a given linked list by changing links
Given a singly linked list, write a function to swap elements pairwise. 
For example, if the linked list is 1->2->3->4->5->6->7 then the function should change it to 2->1->4->3->6->5->7, 
and if the linked list is 1->2->3->4->5->6 then the function should change it to 2->1->4->3->6->5
*/

#include<iostream>
#include<cmath>

using namespace std;

struct node{
       int info;
       node *next;
       }*head,*head1;
       
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
/*     
void insert1(int n){
     node *temp1;
     if(head1==NULL){
                    head1=new node;
                    head1->info=n;
                    head1->next=NULL;
                    temp1=head1;
                    }
     else{
          temp1->next=new node;
          temp1=temp1->next;
          temp1->info=n;
          temp1->next=NULL;
          }
     
     }
*/     
void display(node *temp){
     while(temp!=NULL){
                       cout<<"-->"<<temp->info;
                       temp=temp->next;
                       }
     }
/*
int length(node *temp){
    int len=0;
    while(temp!=NULL){
                      len++;
                      temp=temp->next;
                      }
                      return len;
    }
*/     
void swapPair(node *temp){
     int i=1,n=0;
     node *temp2,*newnode;
     //len=length(temp);
     //len1=length(temp1);
     while(temp!=NULL){
                      if(i%2!=0){
                                 n=temp->info;
                                 temp->info=temp->next->info;
                                 temp->next->info=n;
                                 }
                                 i++;
                                 temp=temp->next;                        
                      }
     }
     
int main(){
    //head=new node;
    head=NULL;
    head1=NULL;
    insert(0);
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    insert(10);
    insert(12);
    insert(14);
    cout<<"\nThe linked List is as follows"<<endl;
    display(head);
    swapPair(head);
    cout<<"\n";
    display(head);
    system("pause");
    return 0;
    }
