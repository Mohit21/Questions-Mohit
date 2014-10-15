#include<iostream>

class Stack1{
public :
	int top;
	int s1[33];

	Stack1(){
		top=-1;
		}

	void push(int element){
		top++;
		s1[top]=element;
		}
	int pop(){
		top--;
		return(s1[top+1]);
		}

};

class Stack2{
public :
	Stack1 ob;
	int top;
	int s2[33];

	Stack2(){
		top=-1;
		}

	void push(int element){
		top++;
		s2[top]=element;
		}
	int pop(){
		top--;
		return(s2[top+1]);
		}
	void quee_pop(){
		for(int i= top;i>0;i--)
			ob.push(s2[i]);
		s2[0]=NULL;
		top=-1;
		for(int j=ob.top;j>=0;j--)
			push(ob.s1[j]);
		ob.top=-1;
	   }
	void display(){
		for(int i=0;i<=top;i++){
			cout<<s2[i]<<" ";
 }			}
};

int main(){

	Stack2 ob;
	ob.push(1);
	ob.push(2);
	ob.push(3);
	ob.quee_pop();
	ob.push(4);
	ob.display();
	system("pause");
    return 0;
}
