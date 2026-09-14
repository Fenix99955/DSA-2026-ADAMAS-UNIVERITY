#include<stdio.h>
#define size 5
int item[size],front=-1,rear=-1;
void enque(int value){
    if(rear==size){
        printf("queue is full\n");
    }
    else{
        if(front==-1){
            front=0;

        }
        rear++;
        item[rear]=value;
        printf("inserted\n");
    }
}

void dequeue(){
    if(front==-1){
        printf("queue is empty\n");
    }
    else{
        printf("deleted\n");
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }
}

void display(){
    if(rear==-1){
        printf("empty\n");

    }
    else{
        printf("the queue is \n");
        for(int i=front;i<rear;i++){
            printf("%d",item[i]);
        }
    }
}



int main(){
    dequeue();
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
    enque(60);

    display();
    dequeue();
    display();

}