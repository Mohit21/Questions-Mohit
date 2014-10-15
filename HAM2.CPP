#include<iostream>

class Quee{
public :
	int rear;
	int front;
	char q[323];

	Quee(){

		rear=-1;
		front=-1;
		}

	void push(int element){

	     if(front==-1){
		front=0;
		}
	     rear++;
	     q[rear]=element;
	}
	void pop(){
		front++;
		}
	void display(){
		for(int i=front;i<=rear;i++)
			cout<<q[i]<<" ";
		}
	void ReplaceItem(char olditem,char newitem){
		for(int i=front;i<=rear;i++){
			if(q[i]==olditem){
				q[i]=newitem;
				}
			}
	}
};

int main(){
	Quee *first = new Quee();
	first->push('A');
	first->push('G');
	first->push('D');
	first->push('E');
	first->push('O');
	first->push('A');
	first->push('Y');
	first->push('J');
	first->push('A');
	first->push('J');
	first->push('G');
	first->push('O');
	first->push('A');
	first->push('F');
	first->display();
	cout<<"\n\n";
	first->ReplaceItem('A','a');
	first->display();
		system("pause");
    return 0;
    }
