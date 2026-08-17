#include<stdio.h>

int linearSearch(int arr[],int size,int key){
    for(int i=0; i<size ; i++){
        if(key == *(arr+i)){
            return i;
        }
    }



    return -1;
}



int main(){
    int arr[]={10,20,60,40,80,70,90,100};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("enter the element you want to seaarch ");
    scanf("%d",&key);

    int res = linearSearch(arr,size,key);
    (res==-1)? printf("not found \n") : printf("found in index %d \n",res);
    return 0;
}