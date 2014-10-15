#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct linked
{
       int info;
       struct linked *next;
};
typedef struct linked node;

node* result,*start2;

void create(node* temp,node* temp1)
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
printf("\nList 2:");
ch='Y';
while(ch=='Y'||ch=='y')
{
		       printf("\nEnter the Value:");
		       fflush(stdin);
		       scanf("%d",&temp1->info);
		       printf("\nDo u want to continue:");
		       fflush(stdin);
		       scanf("%c",&ch);
			if(ch=='y'||ch=='Y'){
					    temp1->next=(node*)malloc(sizeof(node));
					    temp1=temp1->next;
					    }
		       else {
			    temp1->next=NULL;
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

void addList(node * temp,node *temp1)
{

     int num=0,num1=0,num2=0,j=0,t=0;
     while(temp!=NULL)
     {
		      num=(num*10)+temp->info;
		      temp=temp->next;
		      }
     while(temp1!=NULL)
     {
		       num1=(num1*10)+temp1->info;
		       temp1=temp1->next;
		       }
     printf("\n%d",num);
     printf("\n%d",num1);
     t=num1+num;
     num2=reverse(t);
     while(num2!=0)
     {
		   if(j==0)
		   {
		     start2=(node*)malloc(sizeof(node));
		     start2->info=num2%10;
		     result=start2;
		     num2=num2/10;
		     j++;
		     }
		  else
		  {
		      result->next=(node*)malloc(sizeof(node));
		      result=result->next;
		      result->info=num2%10;
		      num2=num2/10;
		      j++;
		      }
		  }
     result->next=NULL;
     result=start2;
}

int reverse(int n)
{
int k,a=0;
k=n;
while(k!=0)
	{
	a=a*10+k%10;
	k=k/10;
	}
	return a;
}

void main()
{
node *start=(node*)malloc(sizeof(node));
node *start1=(node*)malloc(sizeof(node));
clrscr();
printf("\nCreation");
create(start,start1);
addList(start,start1);
printf("\nLinked list now conatins");
display(result);
getch();
  }
