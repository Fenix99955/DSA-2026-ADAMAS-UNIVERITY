#include<stdio.h>
void modifiedbubbleSort(int arr[],int size){
    int flag=0;

    for(int i=0 ; i<size-1;i++){
        for(int j=0 ; j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag++;
            }
            for(int k=0;k<size;k++){
                printf("%d ",arr[k]);
            }
            printf("\n");
                

        }
        if (flag==0){
            break;
        }


    }
}


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("intermediates\n");
    modifiedbubbleSort(arr,size);
    printf("sorted array \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");


    return 0;

}