//selection sort modified where after each iteration the element in its correct place get dropped until the final iteration where you have only the largest element 
#include<stdio.h>
void selectionSort(int arr[],int *low,int *size){
    for(int i =*low; i<*size-1; i++){
        int min_index=i;
        for(int j = i+1; j <*size ; j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }

        int temp = arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;

        *low=*low+1;

        for(int k=*low; k<*size-1;k++){
            printf("%d ",arr[k]);
        }
        printf("\n");

        

        
    }
}


int main(){
    int arr[]={2,5,9,6,3,7,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("intermediates\n");
    int low =0;
    selectionSort(arr,&low,&size);
    printf("sorted array \n");
    for(int i=low;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");


    return 0;

}