#include<stdio.h>
void selectionSort(int arr[],int size){
    for(int i =0 ; i<size-1; i++){
        int min_index=i;
        for(int j = i+1; j <size ; j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }

        int temp = arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;



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
    selectionSort(arr,size);
    printf("sorted array \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");


    return 0;

}