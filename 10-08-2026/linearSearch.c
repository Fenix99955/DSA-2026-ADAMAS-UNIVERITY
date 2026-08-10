#include<stdio.h>
int linearSearch(int arr[],int size,int key){
    for(int i =0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}

int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=60;
    int res=linearSearch(arr,size,key);
    (res==-1)? printf("not found"): printf("the element is found in the pos %d \n",res);

    return 0;
}