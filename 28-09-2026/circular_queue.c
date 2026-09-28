//circular queue

#include<stdio.h>
#define size 5
int front=-1,rear=-1;
int queue[size];

int isFull(){
    if(front==(rear+1)%size || rear+1==size && front==0){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    return front==-1 && rear==-1;
}


void enque(int element){
    if(isFull()){
        printf("full\n");
        return;
    }
    if(front==-1)
        front=0;
        rear=(rear+1)%size;
        queue[rear]=element;
        printf("inserted\n");
}

int dequeue(){
    int item;
    if(isEmpty()){
        printf("the queue is empty\n");
        return -1;
    }
    else{
        item=queue[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%size;

        }
        printf("dequeued\n");
        return item;
    }
}


void display(){
    int i;
    if(isEmpty()){
        printf("empty\n");
    }
    else{
        printf("front=%d\n",queue[front]);
        for(i=front;i!=rear;i=(i+1)%size){
            printf("%d\t",queue[i]);
        }
        printf("%d\n",queue[i]);
        printf("rear=%d\n",queue[rear]);
    }

}

int main(){
    dequeue();
    display();
    enque(20);
    enque(30);
    enque(10);
    enque(50);
    enque(77);
    enque(69);
    enque(22);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();

}