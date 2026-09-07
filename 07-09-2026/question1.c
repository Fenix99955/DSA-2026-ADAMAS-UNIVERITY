//implement the seaarching technique that devides the array by halfat each step . with an unsorted array and implement the sorting first that performs best when the array is sorted
#include<stdio.h>

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

int main(){
    int arr[]={9,8,5,6,3,2,1,4,7};
    int size=sizeof(arr)/sizeof(arr[0])-1;
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
}