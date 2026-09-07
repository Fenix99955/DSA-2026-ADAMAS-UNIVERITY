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

void insertionSort(int arr[],int size){
    for(int i=1;i<=size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&key<arr[j]){
            arr[j+1]=arr[j];
            --j;
        }

        arr[j+1]=key;
    }
}


int bianarySearch(int arr[],int low,int high,int key){
    if(low<=high){
        int mid= low+(high-low)/2;

        if(arr[mid]==key){
            return mid;
        }

        else if(arr[mid]>key){
            return bianarySearch(arr,mid+1,high,key);
        }

        else{
            return bianarySearch(arr,low,mid-1,key);
        }
    }
}

void merge(int arr[],int low, int mid, int high){
    int n1=mid-low +1;
    int n2=high-mid;
    int L[n1],R[n2];

    for(int i=0; i<n1;i++){
        L[i]=arr[low+i];
    }

    for(int j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=low;

    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }


    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }


    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}








void mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}




int main(){
    int arr[]={108,45,89,63,78,98,55,41,21,11};
    int size=sizeof(arr)/sizeof(arr[0])-1;
    printf("enter selection\n 1 for merge \n 2 for question 1 \n 3 for question2 \n enter :");
    int op;
    scanf("%d",&op);
    switch(op){
        case 1:
            mergeSort(arr,0,size);
                for(int i=0; i<=size;i++){
             printf("%d\t",*(arr+i));
                     }
                     printf("\n");
            break;
        case 2:
        int key;
    insertionSort(arr,size);

    printf("enter the element you want to search");
    scanf("%d",&key);
    int ret=bianarySearch(arr,0,size,key);
    (ret==-1)? printf("notfound\n") : printf("found in the index %d\n",ret);
    for(int i=0; i<=size;i++){
        printf("%d\t",*(arr+i));
    }
    printf("\n");

    break;
            

        case 3:
         printf("intermediates\n");
        bubbleSort(arr,size);
        printf("sorted array \n");
        for(int i=0;i<size;i++){
             printf("%d ",arr[i]);
        }
        printf("\n");
        break;

    }
    return 0;

}