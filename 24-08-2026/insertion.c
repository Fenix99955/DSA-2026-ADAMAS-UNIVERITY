#include<stdio.h>
void insertionSort(int arr[],int size){
   for(int i=1; i <size ; i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0&&key<arr[j]){
        arr[j+1]=arr[j];
        --j;
    }
    arr[j+1]=key;

    
        for(int k=0;k<size;k++){
                printf("%d ",arr[k]);
            }
            printf("\n");
    }
   }



int main(){
    int arr[]={2,5,9,6,3,7,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("intermediates\n");
    insertionSort(arr,size);
    printf("sorted array \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");


    return 0;

}