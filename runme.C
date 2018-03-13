/*
WHAT NEEDS TO BE DONE
Ask Cain the commands to compile and run in C.
Ask Cain how to access array to fill with random letters
Have him look over my pseudocode
*/






#include <stdio.h>;

typedef struct LLNode()
{
  char *ip; //NEED TO CHANGE TO DYNAMICALLY ALLOCATED STRINGS with random length and characters
  struct LLNode * next;
  struct LLNode * prev;
}

void enqueue(char * sp; struct LLNode ** head, struct LLNode ** tail)
{

  //GOAL: enqueue at tail of queue
  //1. accept a pointer to the string that is to be enqueued (will be content!!!!)
  //2.attempt to create node structure to store it
  //2.DON'T FORGET TO DYNAMICALLY ALLOCATE SPACE FOR NODES TO LIVE!!!!
  //3.if you attempt(and fail) to insert the structure into the queue, return int error code

}

//return pointer to dequeued node
void dequeue(struct LLNode *head, struct LLNode *tail)
{

  //remove NODE from head of queue
  //Should return a pointer to recently dequeued node OR null if failure
  //DON'T FORGET TO FREE MEMORY FROM NODES and NODE CONTENT FOR NEW NODES TO LIVE!!!! outside function?

}



main()
{
  //enqueue 10 nodes
  int i;
  for(i = 0; i < 10; i++)
  {

    int stringLength = rand() % 10; //limited just for educational, time saving purposes
    char *sp = (char *)malloc(stringLength * sizeof(int));
    //fill array with random characters




    //how to generate random lowercase letter
    char randomletter = 'a' + (random() % 26);


  //  enqueue(randomletter, *head, *tail);
  }//init 10 nodes enqueued

  int j;
  for(j = 0; j < 100; j++)
  {
  //loop that will enqueue/dequeue/print x number of times
  enqueue(content, *head, *tail);

  }//bulk of work

  int k;
  for(k = 0; k < 12; k++ )
  {
    dequeue(*head, *tail);
  }//final dequeue

}
