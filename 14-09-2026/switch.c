#include<stdio.h>

//queue

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


//stack

#define max 5
int stack[max];

int top =-1;

int isFull(){
    return top==max-1;
}

int isEmpty(){
    return top==-1;
}

void push(int value){
    if(isFull()){
        printf("stackover flow\n");
    }
    else{
        top++;
        stack[top]=value;
        printf("pushed\n");

    }
}

int pop(){
    if(isEmpty()){
        printf("stack underflow\n");
        return -1;
    }
    else{
        int popped_value=stack[top];
        top--;
        return popped_value;
    }
}

int peek(){
    if(isEmpty()){
        printf("stack empty\n");
        return -1;
    }
    return stack[top];
}


void display(){
    if(isEmpty()){
        printf("stack under flow\n");
    }
    printf("stack\n");
    for(int i=top;i>=0;i--){
        printf("| %d |\n",stack[i]);
        printf("-----\n");
    }
}

void main(){

    push(10);
    push(20);
    push(30);
    display();
    printf("%d\n",peek());
    printf("%d\n",pop());
    display();

}