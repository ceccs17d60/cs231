#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*start,*ptr,*newnode,*preptr;
void addbg();
void addend();
int option;
void main()
{
start=NULL;
while(1)
{
printf("enter a opiton \n");
printf("1.addbg\n2.addend\n3.exit\n");
scanf("%d",&option);
switch(option)
{
case 1:addbg();
break;
case 2:addend();
break;
case 3:exit(0);
break;
default:printf("wrong choice\n");
}
}
}
void addbg()
{
int num;
printf("enter a element\n");
scanf("%d",&num);
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node*));
if(start==NULL)
{
newnode->data=num;
start=newnode;
}
else
{
newnode->data=num;
newnode->next=start
}
}
void addend()
{
int num;
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node*));
printf("enter a data");
scanf("%d",&num;)
}
