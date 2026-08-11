//code for deletion an an aarray

#include<stdio.h>
int main(){

    int arr[]={10,20,30,50,90,80,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    int pos=4;

    for(int i=pos; i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;

    
    for(int j=0; j<size; j++){
        printf("%d ,",arr[j]);
    }
    printf("\n");
    return 0;

}
