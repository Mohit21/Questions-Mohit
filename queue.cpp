#include<iostream>

using namespace std;

struct node {
       int info;
       node *next;
       }*rear=NULL,*front=NULL;
       
void insert(int n){
     if(rear==NULL){
                                 rear=new node;
                                 front=new node;
                                 rear->info=n;
                                 rear->next=NULL;
                                 front=rear;
                                 front->next=NULL;
                                 }
     else{
          rear->next=new node;
          rear=rear->next;
          rear->info=n;
          rear->next=NULL;          
          }
     }
     
void deleten(){
     if(front==NULL){
                     cout<<"\nUnderflow";
                     }
     else{
          cout<<"\nThe Deleted Vlaue-->"<<front->info;
          front=front->next;
          }
     }

void display(){
     
     if(front==NULL){
                     cout<<"\nUnderflow";
                     }
     else{
          while(front!=rear){
                             cout<<"-->"<<front->info;
                             front=front->next;
                             }
          }
     }
     
int main(){
    system("cls");
    cout<<"\nQueue Menu";
    cout<<"\nInsertion\n";
    insert(4);
    insert(9);
    insert(7);
    insert(5);
    insert(14);
    insert(28);
    cout<<"\nDeletion\n";
    deleten();
    cout<<"\nDisplay\n";
    display();
    system("pause");
    return 0;
    }
