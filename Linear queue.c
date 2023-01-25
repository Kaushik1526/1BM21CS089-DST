#include<stdio.h>
#define QSIZE 5

 void insert_rear(int q[],int item, int *r)
 {
    if(*r==QSIZE-1)
    printf("\n Queue Overflow");
    else
    {
        (*r)++;
        q[*r]=item;        
    }
 }
 int delete_front(int q[],int *f, int *r)
 {
    if(*f>*r)
    printf("\n Queue Underflow");
    else
    {
        return q[*f++];
    }
 }
 void display (int q[], int *f, int *r)
 {
    int i;
    if(*f>*r)
    printf("\n Queue is empty");
    else
    {
        for(i=0;i<=*r;i++)
        printf("%d",q[i]);
    }
 }
 void main()
 {
    int q[QSIZE],item,r=-1,f=0,choice,val_del;
    while(1)
    {
        printf("\n Enter your choice");
        printf("\n 1.Insert 2.Delete 3.Display");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: printf("\n Enter the value to be inserted");
                scanf("%d",&item); 
                insert_rear( q,item,&r);
                break;
        
        case 2: val_del=delete_front(q,&f,&r);
                printf("Item deleted: %d",val_del);
                break;

        case 3: display(q,&f,&r);
                break;        
        default: exit (0);
        }
    }
 }