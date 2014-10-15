#include<iostream>
#include<stdlib>


class Quee{
public :
	int rear;
	int front;


	Quee(){
		int q[33]
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
};

int main(){
	Quee *two=new Quee();
	two->push(1);
	two->push(2);
	two->push(3);
	two->push(4);
	two->push(5);
	two->pop();
	two->display();
	
	sytem("pause");
	return 0;
}
