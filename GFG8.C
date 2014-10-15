#include<stdio.h>
#include<conio.h>
#include<alloc.h>

/*
I/P--1->2->3->4->5->6
O/P--2->4->6->1->3->5
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
/*
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
*/
void segregate(node* temp)
{
	int i=0;
	node *temp1,*temp2,*newnode,*t;
	temp1=temp;			//temp1 points to start
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp2=temp;             	//temp2 points to last node
	temp=start;
	if(temp->info%2==0)
	{
		if(i==0)
		{
			newnode=(node*)malloc(sizeof(node));
			newnode=temp;
			t=temp;
			temp=temp->next;
			free(t);
			newnode->next=temp1->next;
			temp1->next=newnode;
			temp1=newnode;
			start=temp1;
		}
		else
		{       newnode=(node*)malloc(sizeof(node));
			newnode=temp;
			t=temp;
			temp=temp->next;
			free(t);
			newnode->next=temp1->next;
			temp1->next=newnode->next;
		}
	}
	else
	{       newnode=(node*)malloc(sizeof(node));
		newnode=temp;
		t=temp;
		temp=temp->next;
		free(t);
		newnode->next=NULL;
		temp2->next=newnode;
	}

}


void main()
{
	start=(node*)malloc(sizeof(node));
	clrscr();
	printf("\nCreation");
	create(start);
	segregate(start);
	printf("\nLinked list now conatins");
	display(start);
	getch();
}
