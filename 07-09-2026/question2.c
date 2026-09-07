//implement the sorting technique which checks adjacent elements and swaps for an array of 10 elements for only one external loop iteration  then take the intermediate array and perform that sorting which performs the worst when the array is sorted

#include<stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}





void bubbleSort(int arr[],int size){
    for(int i=0 ; i<2;i++){
        for(int j=0 ; j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            


        }


    }
    quickSort(arr,0,size);
}


int main(){
    int arr[]={108,45,89,63,78,98,55,41,21,11};
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