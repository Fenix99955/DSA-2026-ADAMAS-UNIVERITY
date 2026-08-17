#include<stdio.h>


int traver(int arr[],int size){

for(int i=0;i<size;i++){
        printf("%d ,",*(arr+i));
    }
    return 0;
}



int access(int arr[],int c){

    printf("the element is %d\n",*(arr+c));


    return 0;

}

int main(){



    int arr[]={10,20,30,40,50,60,80,97};
    int size=sizeof(arr)/sizeof(arr[0]);
    int c;
    traver(arr,size);
    printf("\n");

    printf("enter the address of the element you want to access");
    scanf("%d",&c);

    access(arr,c);
    return 0;
}