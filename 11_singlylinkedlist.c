#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*start,*ptr,*newnode,*preptr;
void addbg();
void addaftrnode();
void display();
void addend();
int option;
void main()
{
start=NULL;
while(1)
{
printf("enter a choice\n");
printf("1.add node at first end\n2.add after a node\n3.add node at end\n4.display linkedlist\n5.exit\n");
scanf("%d",&option);
switch(option)
{
case 1:addbg();
break;
case 2:addaftrnode();
break;
case 3:addend();
break;
case 4:display();
break;
case 5:exit(0);
break;
default:printf("wrong choice");
break;
}
}
}
void addbg()
{
int num;
printf("enter a data\n");
scanf("%d",&num);
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node*));
if(start==NULL)
{
newnode->data=num;
newnode->next=NULL;
start=newnode;
printf("element is added=%d \n",num);
}
else
{
newnode->data=num;
newnode->next=start;

start=newnode;
}

}
void addaftrnode()
{
int search,num;
ptr=start;
preptr=ptr;
printf("enter a data\n");
scanf("%d",&num);
newnode=(struct node*)malloc(sizeof(struct node*));
newnode->data=num;
if(start==NULL)
{
printf("no elements  value is inserted at begining\n");
newnode->next=NULL;
start=newnode;
}
else
{
printf("enter a search data\n");
scanf("%d",&search);
while(preptr->data!=search)
{
preptr=ptr;
ptr=ptr->next;
}
newnode->next=preptr->next;
preptr->next=newnode;
printf("element added after the given node%d \n",search);
}
}
void addend()
{
int num;
printf("enter a node value \n");
scanf("%d",&num);
newnode=(struct node*)malloc(sizeof(struct node*));
newnode->data=num;
newnode->next=NULL;
if(start==NULL)
{
start=newnode;
}
else
{
ptr=start;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=newnode;
}
}


void display()
{
ptr=start;
if(ptr==NULL)
{
printf("no elements elements\n");
}
else
{
printf("linked list elements\n");
while(ptr!=NULL)
{
printf("%d \n",ptr->data);
ptr=ptr->next;
}
}
}
