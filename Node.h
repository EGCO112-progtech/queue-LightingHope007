//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;


void enqueue(NodePtr * head, NodePtr* tail, int x){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
    if(*head==NULL)
    {
      *head= new_node;
    }
    else
    {
      (*tail)->nextPtr=new_node;
    }
    (*tail)=new_node;
     new_node->data = x;
 }
}


int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t){
   int value= t->data;
   *head=(*head)->nextPtr;
   free(t);
   if(*head==NULL)
   {
    (*tail)=NULL;
   }
   /* Finish dequeue*/
       
       
   return value;
   }
   printf("Empty queue");
   return 0;
}



#endif
