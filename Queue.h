

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  if(q->size==0)
  {
    q->headPtr=new_node;
  }
  else
  {
    q->tailPtr->nextPtr=new_node;
  }
  q->tailPtr=new_node;
  q->tailPtr->data = x;
  q->size++;
  }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value =t->data;
    q->headPtr=t->nextPtr;
    if(q->size==1)
    {
      q->tailPtr=NULL;
    }  
      free(t);
      q->size--;
   return value;
   }
   printf("Empty queue");
   return 0;
}

