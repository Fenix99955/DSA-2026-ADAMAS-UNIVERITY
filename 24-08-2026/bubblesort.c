#include<stdio.h>
void bubbleSort(int arr[],int size){
    for(int i=0 ; i<size-1;i++){
        for(int j=0 ; j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            for(int k=0;k<size;k++){
                printf("%d ",arr[k]);
            }
            printf("\n");

        }


    }
}


int main(){
    int arr[]={2,5,9,6,3,7,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("intermediates\n");
    bubbleSort(arr,size);
    printf("sorted array \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");


    return 0;

}