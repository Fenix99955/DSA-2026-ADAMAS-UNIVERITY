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


        for(int k=0;k<high;k++){
        printf("%d ",arr[k]);
    }
    printf("\n");
    
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}



int main(){
    int arr[]={9,6,8,7,2,5,1,3};
    int high=sizeof(arr)/sizeof(arr[0])-1;
    int low=0;
    quickSort(arr,low,high);
    for(int i=0;i<high;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}