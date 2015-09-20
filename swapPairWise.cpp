#include<iostream>

using namespace std;

struct node{
       int info;
       node *next;
       }*start;
       
void insert(int n){
     node *temp;
     if(start==NULL){
                     start=new node;
                     start->info=n;
                     start->next=NULL;
                     temp=start;
                     }
     else{
          temp->next=new node;
          temp=temp->next;
          temp->info=n;
          temp->next=NULL;
          }
     }
    
int length(node *temp){
    int c=0;
    while(temp!=NULL){
                      c++;
                      temp=temp->next;
                      }
    return c;
    }    
void swapPair(node *temp){
     
     int len=length(temp);
     node *prev,*temp1,*temp2;
     if(len%2==0){
                  while(temp!=NULL){
                                    if(temp==start){
                                        temp1=temp->next;
                                        temp->next=temp->next->next;
                                        temp1->next=temp;
                                        start=temp1;
                                        prev=temp;
                                        }
                                    else if(temp->next->next==NULL){
                                         temp1=temp->next;
                                         prev->next=temp1;
                                         temp1->next=temp;
                                         temp->next=NULL;
                                         break;
                                         }
                                    else{
                                         temp1=temp->next;
                                         temp->next=temp->next->next;
                                         prev->next=temp1;
                                         temp1->next=temp;
                                         prev=temp;
                                         }
                                    temp=temp->next;    
                               }
                               }
                  else{
                       while(temp->next!=NULL){
                                    if(temp==start){
                                        temp1=temp->next;
                                        temp->next=temp->next->next;
                                        temp1->next=temp;
                                        start=temp1;
                                        prev=temp;
                                        }
                                    else if(temp->next->next==NULL){
                                         temp1=temp->next;
                                         prev->next=temp1;
                                         temp1->next=temp;
                                         temp->next=NULL;
                                         break;
                                         }
                                    else{
                                         temp1=temp->next;
                                         temp->next=temp->next->next;
                                         prev->next=temp1;
                                         temp1->next=temp;
                                         prev=temp;
                                         }
                                    temp=temp->next;    
                               }                           
                       }
                  }
void display(node *temp){
     cout<<"\nThe linked list as follows"<<endl;
     while(temp!=NULL){
                       cout<<"-->"<<temp->info;
                       temp=temp->next;
                       }
     }       
int main(){
    start=NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    //insert(10);
    cout<<"\nBefore swap!";
    display(start);
    swapPair(start);
    cout<<"\nAfter swap!";
    display(start);
    cout<<endl;
    system("pause");
    return 0;
    }
