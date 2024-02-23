#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) 
{
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
  int x;

  /*
   enqueue(&headPtr,&tailPtr,5);
   enqueue(&headPtr,&tailPtr,6);
   enqueue(&headPtr,&tailPtr,7);

   x = dequeue(&headPtr,&tailPtr);
   printf("%d\n",x);

   x = dequeue(&headPtr,&tailPtr);
   printf("%d\n",x);

   x = dequeue(&headPtr,&tailPtr);
   printf("%d\n",x);
*/
  /* For struct Queue */
  Queue  qu;
   qu. headPtr=NULL;
   qu.tailPtr=NULL;
   qu.size=0;
   int i;
/*
   enqueue_struct(&qu,8);
   i = dequeue_struct(&qu);
   printf("%d\n",i);
*/
   

  for(i=1;i<argc;i++){
          if(strcmp(argv[i],"x")==0){
            if(qu.size>=1)
            {
              x=dequeue_struct(&qu);
              printf("dequeing %d\n",x);
            }
            else
            {
              printf("Empty queue\n");
            }
              
          }
          else {
           enqueue_struct(&qu,atoi(argv[i]));
            
          }
  }
  return 0;
}

