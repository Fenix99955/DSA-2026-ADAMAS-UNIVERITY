//bianary search using iteration
#include<stdio.h>

int bianarySearch(int arr[],int x,int low,int high){
    while(high>=low){
        int mid=low+(high - low)/2;
        if(arr[mid]==x){
            return mid;

        }
        else if(x>arr[mid]){
            low=mid+1;
        }

        else{
            high=mid-1;
            }
    }

    return -1;

}


int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=80;
    int result=bianarySearch(arr,x,0,n-1);
    if (result==-1){
        printf("not found");
    }
    else{
        printf("found at index %d",result);
    }
    return 0;

}