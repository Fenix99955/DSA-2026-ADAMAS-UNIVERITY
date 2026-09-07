#include<stdio.h>
void updatedselectionSort(int arr[],int size){
    for(int i =0 ; i<(size-1)/2; i++){
        int min_index=i;
        for(int j = i+1; j <size ; j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }

        int temp = arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;


        int max_index=size-1-i;
        for(int l =size-1-i; l>i ; l--){
            if(arr[l]>arr[max_index]){
                max_index=l;
            }
        }

        int temp2 = arr[size-1-i];
        arr[size-1-i]=arr[max_index];
        arr[max_index]=temp2;


        for(int k=0;k<size;k++){
                printf("%d ",arr[k]);
            }
            printf("\n");
    }
}


int main(){
    int arr[]={9,8,7,6,5,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("intermediates\n");
    updatedselectionSort(arr,size);
    printf("sorted array \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");


    return 0;

}