#include<stdio.h>
#include<conio.h>
#include<alloc.h>

/*
I/P--1->2->3->4->5->6->7
m=2,n=1     m=spaces,n=delete the element
O/P--1->2->4->5->7
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
     while(temp!=NULL)
     {
		      printf("-->%d",temp->info);
		      temp=temp->next;
     }

}

void deleten(node* temp)
{
	int m,n,i,j;
	node *temp1,*temp2;
	printf("Enter the Value of m:");
	fflush(stdin);
	scanf("%d",&m);
	printf("\nEnter the values of n:");
	fflush(stdin);
	scanf("%d",&n);
	while(temp!=NULL)
	{
	   i=1;j=1;
	   if(temp==NULL)
	   {
		return;
	   }
	   while(i<m)
	   {
		temp=temp->next;
		i++;
	   }
	   temp1=temp->next;
	   while(j<=n)
	   {
		j++;
		temp2=temp1;
		temp1=temp1->next;
		free(temp2);
		  }
	  temp->next=temp1;

	   temp=temp1;

	}


}

void main()
{
node* start=(node*)malloc(sizeof(node));
clrscr();
printf("\nCreation");
create(start);
deleten(start);
printf("\nLinked list now conatins");
display(start);
getch();
}
