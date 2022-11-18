#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 10
void push(int st[10],int *top, int item)
 {
  if (*top==STACK_SIZE-1)
  printf("Overflow Condition\n");
  else
  {
   (*top)++;
   st[*top]=item;
  }
}
int pop(int st[10],int *top)
{
 int del_item;
 if(*top==-1)
 printf("Stack Underflow\n");
 else
 {
  del_item = st[*top];
  *top--;
  return del_item;
 }
}
void display(int st[10], int *top)
{
 int i;
 if(*top==-1)
 printf("Stack is empty\n");
 for(i=0;i<=*top;i++)
 printf("%d\t",st[i]);
}
void main()
{ 
 int choice,val_del,top=-1,item,st[STACK_SIZE];
 while(1)
 {
  printf("\n 1.PUSH 2.POP 3.DISPLAY \n");
  printf("enter your choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:printf("enter the vaue to be pushed\n");
          scanf("%d",&item);
          push(st,&top,item);
          break;
    
   case 2:val_del=pop(st,&top);
          printf("\n the deleted item is %d",val_del);
          break;
   
   case 3:display(st,&top);
          break;
   
   default:exit(0);
           
  }
 }
} 