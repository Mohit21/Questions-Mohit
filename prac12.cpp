#include <iostream>
using namespace std;

long int queue1[1000],rear1=-1,front1=-1;

void queue_1(int a){
	if(rear1==-1&&front1==-1){
		queue1[++rear1]=a;
		front1=rear1;
	}
	else if(front1>0){
		rear1=0;
		queue1[rear1]=a;
	}
	else{
		queue1[++rear1]=a;
	}
	}	
	
int pop(long int queue1_1[],int rear){
	int x=queue1_1[rear];
	rear=rear-1;
	return rear;
}

int iterate(long int queue11[],long int B[],int rear11,int front11,int N){
	int c=0,x;
	for(int i=0;i<N;i++){
		while(orear11!=front11){
			if(queue11[rear11]==B[i]){
				rear11=pop(queue11,rear1);
				c++;
			}
			else{
				x=queue11[rear11];
				for(int i=rear11;i>front11;i++){
					queue11[i]=queue11[i+1];
					c++;
				}
				queue11[front11]=x;
			}
		}
		
	}
	return c;
}
int main()
{
   	//cout << "Hello World!" << endl;
    long int A[1000],B[1000],N,a;
   	cin>>N;
   	for(int i=0;i<N;i++){
   		cin>>A[i];	
   	}
   	for(int i=0;i<N;i++){
   		cin>>B[i];
   	}
   	for(int i=0;i<N;i++){
   		queue_1(B[i]);	
   	}
   	a=iterate(queue1,B,rear1,front1,N);
   	cout<<a<<endl;
   system("pause");
   return 0;
}
