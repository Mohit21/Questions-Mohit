/*
Merge a linked list into another linked list at alternate positions
Given two linked lists, insert nodes of second list into first list at alternate positions of first list.
For example, if first list is 5->7->17->13->11 and second is 12->10->2->4->6, the first list should become 5->12->7->10->17->2->13->4->11->6 and second list should become empty. 
The nodes of second list should only be inserted when there are positions available. 
For example, if the first list is 1->2->3 and second list is 4->5->6->7->8, then first list should become 1->4->2->5->3->6 and second list to 7->8.
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
void merge(node *temp,node *temp1){
     int i=1;
     node *temp2,*newnode;
     //len=length(temp);
     //len1=length(temp1);
     while(temp!=NULL && temp1!=NULL){
                      if(i%2!=0){
                                 newnode=new node;
                                 newnode->info=temp1->info;
                                 newnode->next=temp->next;
                                 temp->next=newnode;
                                 
                                 temp1=temp1->next;
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
    insert(16);
    insert1(1);
    insert1(3);
    insert1(5);
    insert1(7);
    insert1(9);
    insert1(11);
    insert1(13);
    insert1(15);
    insert1(17);
    cout<<"\nThe linked List is as follows"<<endl;
    display(head);
    cout<<"\n";
    display(head1);
    merge(head,head1);
    cout<<"\n";
    display(head);
    system("pause");
    return 0;
    }
