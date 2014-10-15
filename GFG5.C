#include<stdio.h>
#include<conio.h>
#include<alloc.h>
/*
XOR-GATE
I/P--1->0->0->0
O/P--1

or for any other I/P the XOR gate is valid!!
*/
struct linked
{
       int info;
       struct linked *next;
};
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
		       if(ch=='y'||ch=='Y'){
					    temp->next=(node*)malloc(sizeof(node));
					    temp=temp->next;
					    }
		       else {
			    temp->next=NULL;
			    }
			 }
}

void display(node *temp)
{
     while(temp->next!=NULL)
     {
		      temp=temp->next;
		      }
     printf("-->%d",temp->info);
}

void xorGate(node * temp)
{
	while(temp!=NULL)
	{
		if(temp->info==1&&temp->next->info==0)
		{
			temp->next->info=1;
		}
		else if(temp->info==0&&temp->next->info==0)
		{
			temp->next->info=0;
		}
		else if(temp->info==0&&temp->next->info==     1)
		{
			//temp=temp->next;
			temp->next->info=1;
		}
		else if(temp->info==1&&temp->next->info==1)
		{
		       //	temp=temp->next;
			temp->next->info=0;
		}

			temp=temp->next;
	}
}

void main()
{
node* start=(node*)malloc(sizeof(node));
clrscr();
printf("\nCreation");
create(start);
xorGate(start);
printf("\nLinked list now conatins");
display(start);
getch();
}
