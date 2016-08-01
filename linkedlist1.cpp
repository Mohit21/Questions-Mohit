#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
int info;
Node *next;
}*start;

void create(int val){
    Node *temp;
    if(start==NULL){
        start=new Node;
        start->info=val;
        start->next=NULL;
        temp=start;

    }
    else{
        temp->next=new Node;
        temp=temp->next;
        temp->info=val;
        temp->next=NULL;
    }
}

void display(Node *temp){
    while(temp!=NULL){
        cout<<"-->"<<temp->info;
        temp=temp->next;
    }
}

int length(Node *temp){
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insert(int val,int pos){
    int len=length(start);
    Node *temp=start;
    Node *newnode=new Node;
    newnode->info=val;
    newnode->next=NULL;
    if(pos==0){
        newnode->next=start;
        start=newnode;
        temp=newnode;
    }
    else if(pos==len+1){
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
    }
    else if(pos<=len && pos>0){
        while(pos-2>=0){
            temp=temp->next;
            pos--;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    else{
        cout<<"\nOverflow!";
    }
}

void deleten(int pos){
    Node *temp=start,*temp1;
    int len=length(start);
    if(temp==NULL){
        cout<<"\nUnderFlow";
    }
    else if(pos==0){
        temp1=start;
        start=start->next;
        free(temp1);
        temp=start;
        len--;
    }
    else if(pos==len){
        Node *prev;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        temp1=temp;
        prev->next=NULL;
        free(temp1);
        len--;
    }
    else if(pos<len && pos>0){
            while(pos-2>=0){
                temp=temp->next;
                pos--;
            }
            temp1=temp->next;
            temp->next=temp->next->next;
            free(temp1);
            len--;
    }
    else{
        cout<<"\nOverflow!";
    }
}

int main(){
start=NULL;
create(1);
create(56);
create(80);
create(50);
create(45);
create(7);
create(8);
display(start);
insert(0,0);
insert(999,2);
insert(90,9);
insert(110,12);
insert(62,5);
insert(47,4);
insert(99,8);
insert(120,15);
cout<<endl;
display(start);
deleten(0);
deleten(5);
deleten(6);
deleten(15);
deleten(5);
deleten(1);
cout<<endl;
display(start);
return 0;
}
