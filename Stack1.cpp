#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node{
int info;
Node *next;
}*top;

void push(int val){
    Node *temp;
    if(top==NULL){
        top=new Node;
        top->info=val;
        top->next=NULL;
    }
    else{
        temp=new Node;
        temp->info=val;
        temp->next=top;
        top=temp;
    }
}

void pop(){
    if(top==NULL){
        cout<<"\nUnderflow";
    }
    else{
        cout<<endl<<top->info;
        Node *temp=top;
        top=top->next;
        free(temp);
    }
}

void display(Node *temp){
    cout<<endl;
    while(temp!=NULL){
        cout<<"-->"<<temp->info;
        temp=temp->next;
    }
}

int main(){
top=NULL;
push(8);
push(7);
push(6);
push(4);
push(3);
push(2);
push(1);
display(top);
pop();
display(top);
pop();
display(top);
pop();
display(top);
pop();
display(top);
pop();
display(top);
pop();
display(top);
pop();
display(top);
return 0;
}
