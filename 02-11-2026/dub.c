#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

void traver(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    struct Node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    if(first==NULL||second==NULL||third==NULL){
        printf("mem alloc failed\n");
        free(first);
        free(second);
        free(third);
        return 0;
    }
    first->data=1;
    second->data=7;
    third->data=15;

    first->prev=NULL;
    first->next=second;
    
    second->prev=first;
    second->next=third;

    third->prev=second;
    third->next=NULL;

    head=first;
    traver(head);

    //insertion at the begining
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=26;
    newNode->next=NULL;
    newNode->prev=NULL;

    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }

    traver(head);
    


    //insertion at the end
    struct Node *endNode=(struct Node *)malloc(sizeof(struct Node));
    endNode->data=90;
    endNode->next=NULL;
    endNode->prev=NULL;

    if(head==NULL){
        head=endNode;
    }
    else{
        struct Node * current=head;
        while(current->next!=NULL){
            current=current->next;
        }
        endNode->prev=current;
        current->next=endNode;

    }
    traver(head);

    //insertion in the middle;

    struct Node *midNode=(struct Node *)malloc(sizeof(struct Node));
    midNode->data=0;
    midNode->next=NULL;
    midNode->prev=NULL;
    int pos =3;
    if(pos<=1){
        printf("not a valid middle position");
    }

    struct Node *prev,*current;
    prev=NULL;
    current=head;
    for(int i=1;i<pos;i++){
        prev=current;
        current=current->next;
    }
    if(current->next==NULL){
        printf("not a valid middle position");
    }
    else{
        midNode->next=current;
        current->prev=midNode;

        midNode->prev=prev;
        prev->next=midNode;
    }
    traver(head);
//deletion at the begining
struct Node *temp=head;
if(head!=NULL)
    head=head->next;
if(head!=NULL)
    head->prev=NULL;

    free(temp);
traver(head);
//deletion at the end


struct Node *curr=head;
if(head!=NULL&&head->next!=NULL){
while(curr->next!=NULL){
    curr=curr->next;
}
curr->prev->next=NULL;
free(curr);
}
else if(head->next==NULL){
    free(head);
    head=NULL;
}

traver(head);




//deletion in the middle
int posi=2;
struct Node *poo=head;
for(int i=1;i<posi;i++){
    poo=poo->next;
}
poo->next->prev=poo->prev;
poo->prev->next=poo->next;

free(poo);
traver(head);
}