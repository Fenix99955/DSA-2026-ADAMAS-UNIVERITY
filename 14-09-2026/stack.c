#include<stdio.h>
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