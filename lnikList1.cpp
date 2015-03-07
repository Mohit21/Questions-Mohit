#include <iostream>
#include <process.h>
using namespace std;
struct linkList{
int info;
linkList* next;
}*top=NULL,*rear=NULL,*front=NULL,*temp;
typedef struct linkList node;



void insert(int n){
    
     if(rear==NULL){
                           rear=new node;
                           front=new node;  
                           rear->info=n;
                           front=rear;
                           rear->next=NULL;
                           }
     else{
          rear->next=new node;
          rear=rear->next;
          rear->info=n;
          rear->next=NULL;
          }
     }
     
void deleten(node *temp)
{
     if(temp==NULL){
                    cout<<"\nUnderflow";
                    }
     else{
          //temp=front;
          cout<<"\ndeleted value:"<<front->info;
          front=front->next;
          }
     }

void push(int n){
     
     if(top==NULL){
                   top=new node;
                   top->info=n;
                   top->next=NULL;
                   }
     else{
          temp=new node;
          temp->info=n;
          temp->next=top;
          top=temp;
          }
    
     }
void pop(node *temp){
     int n;
     //temp=top;
     n=temp->info;
     cout<<"\nThe deleted value:"<<temp->info;
     top=temp->next;
     
     }
     
void display(node *temp1){
     cout<<"\n";
     temp1=front;
     while(temp1!=NULL){
                       cout<<"-->"<<temp1->info;
                       temp1=temp1->next;
                       }
     }
void display1(node *temp2){
     
     
     cout<<"\n";
     while(temp2!=NULL){
                       cout<<"-->"<<temp2->info;
                       temp2=temp2->next;
                       }
     }

void Queue()
{    system("cls");
     char ch,ch1='y',ch2;
     int n;
     cout<<"\n\t\tQueue-Operations";
     cout<<"\n1.Insert";
     cout<<"\n2.Delete";
     cout<<"\n3.Display";
     cout<<"\n4.Exit";
     cout<<"\nEnter ur choice(1-4)";
     
     do{
             fflush(stdin);
             cin>>ch;
             switch(ch){
                        case '1':
                             
                             while(ch1=='Y'||ch1=='y')
                             {
                                                      cout<<"\nEnter the number:";
                                                      fflush(stdin);
                                                      cin>>n;
                                                      insert(n);
                                                      cout<<"\nDo u want to enter(y/n):";
                                                      fflush(stdin);
                                                      cin>>ch1;      
                                                         }
                                                          break;
                        case '2':deleten(front);
                             break;
                        case '3':display(front);
                             break;
                        case '4':exit(0);
                             break;
                        default:cout<<"Entered wrong choice"; 
                                               break;
                         }
                         cout<<"\nWant to enter again(y/n):";
                         fflush(stdin);
                         cin>>ch2;
                         if(ch2=='y'||ch2=='Y')
                         cout<<"\nAgain enter the choice(1-4):";                                                  
                     }while(ch2=='y'||ch2=='Y');
     }
     
void Stack(){
    system("cls");
     int n;
     char ch,ch1='y',ch2;
     cout<<"\n\t\tStack-Operations";
     cout<<"\n1.Insert";
     cout<<"\n2.Delete";
     cout<<"\n3.Display";
     cout<<"\n4.Exit";
     cout<<"\nEnter ur choice(1-4)";
     do{
             fflush(stdin);
             cin>>ch;
             switch(ch){
                        case '1':
                             
                             while(ch1=='Y'||ch1=='y')
                             {
                                                      cout<<"\nEnter the number:";
                                                      fflush(stdin);
                                                      cin>>n;
                                                      push(n);
                                                      cout<<"\nDo u want to enter(y/n):";
                                                      fflush(stdin);
                                                      cin>>ch1;      
                                                         }
                             break;
                        case '2':pop(top);
                             break;
                        case '3':display1(top);
                             break;
                        case '4':exit(0);
                             break;
                        default:cout<<"Entered wrong choice";
                                               break;
                         }
                         cout<<"\nWant to enter again(y/n):";
                         fflush(stdin);
                         cin>>ch2;
                         if(ch2=='y'||ch2=='Y')
                         {
                                               cout<<"\nEnter the choice(1-4):";
                                               }                         
                     }while(ch2=='y'||ch2=='Y');
                     }

int main()
{   system("cls");
    char ch,ch1;
    cout<<"\n\t\tMenu-Bar";
    cout<<"\n1. Queue";
    cout<<"\n2. Stack";
    cout<<"\n3. Exit";
    cout<<"\nEnter ur choice(1-3):";    
    do{
                   fflush(stdin);
                   cin>>ch;
                   switch(ch){
                              case '1':Queue();
                                       main();
                                   break;
                              case '2':Stack();main();
                                   break;
                              case '3':exit(0);
                                   break;
                              default:cout<<"\nEntered Wrong choice!!";
                                   break;
                                   }
                                   cout<<"\nDo u want to enetr again(y/n):";
                                   fflush(stdin);
                                   cin>>ch1;
                                   if(ch1=='Y'||ch1=='y')
                                   {
                                                         cout<<"\nEnter the choice(1-3)";
                                                         }
                   }while(ch1=='y'||ch1=='Y');
    
    system("pause");
    return 0;
    }
