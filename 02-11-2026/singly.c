#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

//traversal
void traver(struct Node *head){
    struct Node*temp=head;
    while(temp!=NULL){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


void search(struct Node *head,int key){
    struct Node*temp=head;
    while(temp!=NULL){
        if(key==temp->data){
            printf("found %d \t",temp->data);
            return;
        }
        
        temp=temp->next;
    }
    printf("\n");
}


int main(){
    printf("singly LL manipulations \n");
    //nodes
    struct Node * head;
    head=NULL;

    struct Node *first;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=12;
    first->next=NULL;

    struct Node *second;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=24;
    second->next=NULL;

    struct Node *third;
    third=(struct Node *)malloc(sizeof(struct Node));
    third->data=48;
    third->next=NULL;

    head=first;
    first->next=second;
    second->next=third;

    traver(head);
    


    //insertion at the begining
    struct Node *newNode;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=0;
    newNode->next=head;
    head=newNode;
    traver(head);


    //insertion the end;

    struct Node *endNode;
    endNode=(struct Node *)malloc(sizeof(struct Node));
    endNode->data=4;
    endNode->next=NULL;
    struct Node *temp1=head;
    while(temp1->next!=0){
        temp1=temp1->next;
    }
    temp1->next=endNode;
    traver(head);


    //insertion in the middle
    struct Node *midNode;
    midNode=(struct Node *)malloc(sizeof(struct Node));
    midNode->data=5;
    midNode->next=NULL;

    int pos=3;
    if(head==NULL||pos<1){
        printf("not valid");
    }
    else{
        struct Node *temp2=head;
        for(int i=1;i<pos-1;i++){
            temp2=temp2->next;
        }
        midNode->next=temp2->next;
        temp2->next=midNode;
    }

    traver(head);

    //deletion at the begining
    if(head==NULL){
        printf("empty linked list");
    }
    else{
        struct Node *hold=head;
        head=head->next;
        free(hold);
    }
    traver(head);



    //deletion at the end;
    if(head==NULL){
        printf("empty linked list");
    }
    else{
        struct Node *tem=head;
        struct Node *prev;
        while(tem->next!=NULL){
            prev=tem;
            tem=tem->next;
        }
        prev->next=tem->next;
        free(tem);

    }
    traver(head);

    //deletion at the middle;
    if(head==NULL){
        printf("empty linked list");
    }
    else{
        struct Node *tem1=head;
        struct Node *prev1=NULL;
        int pos=2;
        for(int i=1;i<pos;i++){
            prev1=tem1;
            tem1=tem1->next;
        }
        prev1->next=tem1->next;
        free(tem1);
    }
    traver(head);
    search(head,48);

}