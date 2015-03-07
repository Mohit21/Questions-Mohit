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
     
void deleten(node *temp){
     if(temp==NULL){
                    cout<<"\nUnserflow!";
                    }
     else{
          cout<<"\nThe deleted value-->"<<temp->info;
          temp=temp->next;
          start=temp;
          }
     }
     
void display(node *temp){
          while(temp!=NULL){
                            cout<<"-->"<<temp->info;
                            temp=temp->next;
                            }
     }
     
int main(){
    system("cls");
    start=NULL;
    cout<<"\nInsertion";
    insert(25);
    insert(22);
    insert(78);
    insert(788);
    insert(452);
    cout<<"\nDeletion";
    deleten(start);
    cout<<"\nDisplay";
    display(start);
    system("pause");
    return 0;
    }
