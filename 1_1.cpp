#include<iostream.h>
#include<stdlib.h>

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
  
  void trimEnds(int k){

		int count=0;
		Node *start,*last;
		start = first;
		last = first;

		while(last->rptr!=NULL){
			last = last->rptr;
			}


		while(count!=k){
			start=start->rptr;
			count++;
			}
		first=start;
		count=0;
		while(count!=k){
			last=last->lptr;
			count++;
			}
		last->rptr=NULL;

	}
};


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
	cout<<"Question One\n\n";
	list.display();
	list.trimEnds(3);
	cout<<"\n";
	list.display();
	system("pause");
	return 0;
	
}
