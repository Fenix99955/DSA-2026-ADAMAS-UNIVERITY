#include<stdio.h>


int traver(int arr[],int size){

for(int i=0;i<size;i++){
        printf("%d ,",*(arr+i));
    }

}

int main(){



    int arr[]={10,20,30,40,50,60,80,97};
    int size=sizeof(arr)/sizeof(arr[0]);
    traver(arr,size);
    printf("\n");
    return 0;
}