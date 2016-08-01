#include<bits/stdc++.h>
using namespace std;

struct Node{
int info;
Node *next;
}*rear,*front;

void enq(int val){
    if(rear==NULL){
        rear=new Node;
        //front=new Node;
        rear->info=val;
        rear->next=NULL;
        front=rear;
        //front->next=NULL;
    }
    else{
        rear->next=new Node;
        rear=rear->next;
        rear->info=val;
        rear->next=NULL;
    }
}

void deq(){
    if(front==NULL){
        cout<<"\nUnderFlow!";
    }
    else{
        cout<<endl<<"-->"<<front->info;
        front=front->next;
    }
}

void display(Node *temp){
    cout<<endl;
    while(temp!=rear->next){
        cout<<"-->"<<temp->info;
        temp=temp->next;
    }
}
int main(){
front=NULL;
rear=NULL;
enq(1);
enq(2);
enq(3);
enq(4);
enq(5);
enq(6);
enq(7);
enq(8);
display(front);
deq();
display(front);
deq();
display(front);
deq();
display(front);
deq();
display(front);
deq();
display(front);
deq();
display(front);
return 0;
}
l
