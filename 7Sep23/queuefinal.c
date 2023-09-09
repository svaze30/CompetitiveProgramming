/*
 * File: queue.c
 * Author: Siddhartha Chandra
 * Email: siddhartha_chandra@spit.ac.in
 * Created: September 1, 2023
 * Description: This program implements a Queue ADT with a circular array
 */

#include<stdio.h>
#include<stdlib.h>

// Build a Queue Abstract Data structure and perform operations on it 
// Operations:
// 1. display
// 2. isFull
// 3. isEmpty
// 4. enqueue
// 5. dequeue
// 6. front
// 7. rear


struct Queue
{
    int front;
    int rear;
    unsigned size;
    char* array;

};

int isEmpty(struct Queue* queue);
char rear(struct Queue* queue);

// 0 -> Initialize
struct Queue* initialize_queue(unsigned size){
    struct Queue *queue;
    queue->size=size;
    queue->array=(char*)malloc(queue->size*sizeof(char));
    
    queue->front=-1;

    queue->rear=-1;
    return queue;
}


// 0 -> display
void display(struct Queue* queue){
     for(int i=queue->front+1 ; i<=queue->rear;i++){
   printf("%c",queue->array[i]);
   
   }
   printf("\n");
}

// 1 -> isEmpty
int isEmpty(struct Queue* queue){
    if(queue->front==queue->rear){

        printf("The Queue is Empty.");
        return 0;
    }
    else{return 1;}
}

// 3 -> isFull
int isFull(struct Queue* queue){
    if(queue->rear+1==queue->size){
        printf("Queue is full.");
        return 0;
    }
    else{return 1;}
}

// 4 -> enqueue
void enqueue(struct Queue *queue, char item){
    item='0';
    
    if(isFull(queue)==1){
    queue->rear++;
    queue->array[queue->rear]==item;

    };
}

// 5 -> dequeue
char dequeue(struct Queue* queue){
    
    if(isEmpty(queue)==1){
        queue->front++;
         return queue->array[queue->front];
    }
else{return 0;}
    
}

// 6 -> front
char front(struct Queue* queue){
    printf("The character at rear is %c .\n",queue->array[queue->front+1]);
    return queue->array[queue->front+1];
}

// 7 -> rear
char rear(struct Queue* queue){
    printf("The character at front is %c.\n",queue->array[queue->rear]);
}
int main(){

    struct Queue *q =initialize_queue(5);
    enqueue(q, 'c');
    dequeue(q);
   
    display(q);
    return 0;
}