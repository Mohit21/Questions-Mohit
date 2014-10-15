#include<stdio.h>
#include<conio.h>
#include<alloc.h>
/*
swap kth element from frot and end of Linked List
I/P--1->2->3->4->5->6->7
k=3
O/P--1->2->5->4->3->6->7
*/
struct linked
{
       int info;
       struct linked *next;
}*start;
typedef struct linked node;


void create(node* temp)
{
	char ch='y';
	printf("\nList 1:");
	while(ch=='y'||ch=='Y')
	{
		 printf("\nEnter the Value:");
		 fflush(stdin);
		 scanf("%d",&temp->info);
		 printf("\nDo u want to continue:");
		 fflush(stdin);
		 scanf("%c",&ch);
		 if(ch=='y'||ch=='Y')
			{
			    temp->next=(node*)malloc(sizeof(node));
			    temp=temp->next;
			}
		 else   {
			    temp->next=NULL;
			}
	}
}

void display(node *temp)
{
     while(temp!=NULL)
     {
	      printf("-->%d",temp->info);
	      temp=temp->next;
     }

}

int length(node* temp)
{
	int l=0;
	while(temp!=NULL)
	{
		l++;
		temp=temp->next;
	}
	return l;
}
void swapKthnode(node* temp)
{
	int k=0,len=0,i=1,l=0,val=0;
	node *temp1,*temp2,*temp3;
	temp3=temp;
	printf("Enter the Value of k:");
	fflush(stdin);
	scanf("%d",&k);
	printf("\nUr Entered values of k:%d",k);
	len=length(temp);
	len=len++;
	while(i<k)
	{
		  i++;
		  temp=temp->next;
	}
	temp1=temp;
	val=temp1->info;             //val=temp->info
	fflush(stdin);
	l=(len)-(k);
	temp=temp3;            //temp=start

	while(l>1)
	{
		temp=temp->next;
		l--;
	}
	temp2=temp;

	i=1;
	temp=temp3;
	while(i<k)
	{
		i++;
		temp=temp->next;
	}
	fflush(stdin);
	temp->info=temp2->info;

	temp=start;
	fflush(stdin);
	len=len-k;
	while(len>1)
	{
		temp=temp->next;
		len--;
	}
	fflush(stdin);
	temp->info=val;
}

void main()
{
	start=(node*)malloc(sizeof(node));
	clrscr();
	printf("\nCreation");
	create(start);
	swapKthnode(start);
	printf("\nLinked list now conatins");
	display(start);
	getch();
}
