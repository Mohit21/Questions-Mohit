#include<iostream>
using namespace std;
struct node{
       int info;
       node *next;
       }*start;

void insert(node *temp,int n){
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

void display(node *temp){
     while(temp!=NULL){
                       cout<<"-->"<<temp->info;
                       temp=temp->next;
                       }
     }
   
int len(node *temp1){
    int l=0;
    while(temp1!=NULL){
                      // cout<<"-->"<<temp1->info;
                      l++;
                      temp1=temp1->next;
                      }
    return l;
    }
    
void deleteNAfterM(node *temp,int m,int n){
     int length=len(temp);
     cout<<length<<endl;
     int k,k1,i=0;
     node *temp1,*temp2; 
     while(temp!=NULL){
             k=1;k1=0;
             while(k<m&&temp!=NULL){
                     temp=temp->next;
                     k++;
                     }
             temp1=temp->next;        
             while(k1<n&&temp1!=NULL){
                         temp2=temp1;
                         temp1=temp1->next;
                         free(temp2);
                         k1++;
                  }                  
             temp->next=temp1;
             temp=temp1;
             }
     }
int main(){
    start=NULL;
    int n,m;
    insert(start,1);
    insert(start,2);
    insert(start,3);
    insert(start,4);
    insert(start,5);
    insert(start,6);
    insert(start,7);
    insert(start,8);
    cout<<"values for m and n:";
    cin>>m;
    cin>>n;
    deleteNAfterM(start,m,n);
    display(start);
    system("pause");
    return 0;
    }
