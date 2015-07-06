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
     
int length(node*temp){
    int l=0;
    while(temp!=NULL){
                      l++;
                      temp=temp->next;
                      }
    return l;
    }

void swapKth(node *temp,int k){
     int len=length(temp);
     temp=start;
     node *temp1=temp;
     len-=k;
     while(k!=1){
                 temp=temp->next;
                 k--;             
                 }
     while(len!=0){
                 temp1=temp1->next;
                 len--;             
                 }
     int t=temp1->info;
     temp1->info=temp->info;
     temp->info=t;
     }

void display(node *temp){
     temp=start;
     cout<<"\n";
     while(temp!=NULL){
                       cout<<"-->"<<temp->info;
                       temp=temp->next;
                       }
     }
     
int main(){
    start=NULL;
    int k;
    cin>>k;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    swapKth(start,k);
    display(start);
    system("pause");
    return 0;
    }
