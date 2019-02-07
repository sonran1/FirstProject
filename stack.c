#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include"boolean.h"

void init_stack(stack *s) 
   {
     (*s)=NULL;
   }
boolean is_empty(stack s) 
   {
     if (s==NULL)
      return TRUE;
     else
   return FALSE;
   }

void push (stack *s, int x) {
  stack temp;
  temp=(stack)malloc(sizeof(struct stacknode));
  temp->data=x;
  temp->next=(*s);
  (*s)=temp;
  }

void pop(stack *s) {
   stack temp;
   int data_pop;
   temp=(*s);
   data_pop=temp->data;
   *s=temp->next;
   free(temp);
   }

