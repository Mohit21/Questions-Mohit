#include<iostream>
#include<stdlib>

class Node{
public :
	int info;
	struct Node *lptr,*rptr;
	};

class LinkedList{
public :
	Node *first,*temp,*x;
	LinkedList(int i){
		first = new Node();
		first->info = i;
		first->lptr=NULL;
		first->rptr=NULL;
		temp = first;
		}
	void addNode(int i){
		x = new Node();
		x->info = i;
		x->lptr = NULL;
		x->rptr = NULL;
		temp->rptr = x;
		x->lptr = temp;
		temp=x;

	}

	void display(){
		temp = first;
		while(temp!=NULL){
			cout<<temp->info<<" " ;
			temp=temp->rptr;
			}

	}
	void expand(int a){
		temp = first;
		while(temp!=NULL){
			temp->info /= a;
			int count = 1;
			while(count != a){
				x = new Node();
				x->info=temp->info;
				x->rptr=temp->rptr;
				temp->rptr=x;
				temp=x;
				count++;
				}
			temp=temp->rptr;
			}
		}

	

int main(){
	LinkedList list(12);
	list.addNode(22);
	list.addNode(33);
	list.addNode(44);
	list.addNode(55);
	list.addNode(66);
	list.addNode(77);
	list.addNode(87);
	list.addNode(98);
	list.addNode(106);

	cout<<"\n\nQuestion Two\n\n";
	list.expand(3);
	list.display();
	system("pause");
	return 0;
}
