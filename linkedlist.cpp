#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<cstring>

using namespace std;

struct node{
       int info;
       node *next;
       }*start;
       
int length(node *temp){
    int n=0;
    while(temp!=NULL){
                      temp=temp->next;
                      n++;
                      }
    return n;
    }
void create(node *temp,int n){
     node *temp1;
     if(start==NULL){
                     start=new node;
                     start->info=n;
                     start->next=NULL;
                     temp1=start;
                     }
     else{
          temp1->next=new node;
          temp1=temp1->next;
          temp1->info=n;
          temp1->next=NULL;
          }
     }
void insert(node *temp,int n,int pos){
     int len=length(temp);
     node *newnode=new node;
     newnode->info=n;
     if(pos==0){
                newnode->next=start;
                start=newnode;
                }
     else if(pos==len){
          newnode->next=NULL;
          while(temp->next!=NULL){
                                  temp=temp->next;
                                  }
          temp->next=newnode;
          }
     else{
          while(pos>1){
                       temp=temp->next;
                       pos--;
                       }
          newnode->next=temp->next;
          temp->next=newnode;
          }
     }
     
void deleten(node *temp,int pos){
     int len=length(temp);
     node *temp1;
     if(pos==0){
                temp1=temp;
                temp=temp->next;
                start=temp;
                free(temp1);
                }
     else if(pos==len){
          while(temp->next->next!=NULL){
                                        temp=temp->next;
                                        }
          temp1=temp->next;
          temp->next=NULL;
          free(temp1);
          }
     else if(pos>len || len==0){
          cout<<"Underflow!"<<endl;
          }
     else{
          while(pos>0){
                       temp=temp->next;
                       pos--;
                       }
          temp->info=temp->next->info;
          temp1=temp->next;
          temp->next=temp->next->next;
          free(temp1);
          }
     }
void display(node *temp){
     while(temp!=NULL){
                       cout<<"-->"<<temp->info;
                       temp=temp->next;
                       }
     }
     
int main(){
    start=NULL;
    create(start,0);
    create(start,2);
    create(start,4);
    create(start,6);
    insert(start,1,1);
    insert(start,3,3);
    insert(start,5,5);
    insert(start,7,7);
    deleten(start,0);
    //deleten(start,3);
    //deleten(start,5);
    //deleten(start,7);
    display(start);
    system("pause");    
    return 0;
    }
