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
    int n;
    printf("1. bubble\n2. selection\n 3. insertion");
    scanf("%d",&n);
    switch(n){
        case 1 :
            bubbleSort(arr,size);
            printf("sorted array \n");
            for(int i=0;i<size;i++){
                printf("%d ",arr[i]);
    }
    printf("\n");
            break;
        case 2: 
            printf("intermediates\n");
            selectionSort(arr,size);
            printf("sorted array \n");
            for(int i=0;i<size;i++){
                printf("%d ",arr[i]);
    }
    printf("\n");
            break;
        case 3:
            printf("intermediates\n");
            insertionSort(arr,size);
            printf("sorted array \n");
            for(int i=0;i<size;i++){
                printf("%d ",arr[i]);
    }
    printf("\n");
            break;
        default:
            printf("enter a valid  selection");
    }

    


    return 0;

}