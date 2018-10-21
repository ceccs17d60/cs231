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

int option;
void main()
{
start=NULL;
while(1)
{
printf("enter a choice\n");
printf("1.add node at first end\n2.add after a node\n11.display linkedlist\n12.exit\n");
scanf("%d",&option);
switch(option)
{
case 1:addbg();
break;
case 2:addaftrnode();
break;
case 11:display();
break;
case 12:exit(0);
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
printf("enter the node value\n");
scanf("%d",&search);
while(preptr->data!=search && ptr->next!=NULL)
{
preptr=ptr;
ptr=ptr->next;
}
newnode->next=preptr->next;
preptr->next=newnode;
printf("element added after the given node%d \n",search);
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
while(ptr!=NULL)
{
printf("linked list elements %d \n",ptr->data);
ptr=ptr->next;
}
}
}
