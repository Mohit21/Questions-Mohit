#include<iostream>
#include<stdlib>


class Stack{
public :
	int top;
	int s[22];

	Stack(){
		top=-1;
		}

	void push(int element){
		top++;
		s[top]=element;
		}

	int pop(){
		top--;
		return(s[top+1]);
		}

	void display(){
		for(int i=top;i>=0;i--)
			cout<<s[i]<<"\n";
		}
};



int main(){

	Stack one;
	one.push(1);
	one.push(2);
	one.push(3);
	one.push(4);
	one.pop();
	one.display();
	system("pause");
	return 0;
}
