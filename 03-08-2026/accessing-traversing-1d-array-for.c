// accessing and traversing 1D array using for loop

#include<stdio.h>
int n;
int arr[6]={5,6,2,4,8,3};
int size=6;

int perform(){
    printf("your element is : %d",arr[n]);
}
int main(){

    printf("the size of the array is %d \n ",size);
    printf("the elements are : ");
    for(int i=0; i<size ; i++ ){
        printf("%d ,",arr[i]);
        
    }
    printf("\n enter the indes of the element ");
    scanf("%d",&n);
    (n<size) ? perform() : printf("invalid!");
    return 0;
}


