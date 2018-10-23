#include<stdio.h> 
#include<stdlib.h> 
struct node 
{ 
int data; 
struct node *next; 
}*top,*ptr,*newnode; 
void push(); 
void pop(); 
void display(); 
void exit(); 
int choice,stack[20]; 
void main() 
{ 
top=NULL; 
while(1) 
{ 
printf("enter a choice\n"); 
printf("1.push\n2.pop\n3.display\n4.exit\n"); 
scanf("%d",&choice); 
switch(choice) 
{ 
case 1:push(); 
break; 
case 2:pop(); 
break; 
case 3: display(); 
break; 
case 4:exit(0); 
break; 
default:printf("wrong choice\n"); 
break; 
} 
} 
} 
void push() 
{ 
int a; 
printf("enter an element\n"); 
scanf("%d",&a); 
newnode=(struct node*)malloc(sizeof(struct node*)); 
newnode->data=a; 
if(top==NULL) 
{ 
newnode->next=NULL; 
top=newnode; 
printf("element is added\n"); 
} 
else 
{ 
newnode->next=top; 
top=newnode; 
printf("element is added\n"); 
} 
} 
void pop() 
{ 
ptr=top; 
if(top==NULL) 
{ 
printf("stack is empty\n"); 
} 
else 
{ 
ptr=top; 
top=top->next; 
free(ptr); 
} 
} 

void display() 
{ 
ptr=top; 
if(top==NULL) 
{ 
printf("no elements\n"); 
} 
else 
{ 
printf("elements are:\n"); 
while(ptr!=NULL) 
{ 
printf("%d \n",ptr->data); 
ptr=ptr->next; 
} 
} 
} 
