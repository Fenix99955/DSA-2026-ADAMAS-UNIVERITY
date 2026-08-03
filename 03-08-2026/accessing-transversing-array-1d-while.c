//accessing and transversing 1D array using while loop
#include<stdio.h>
int n;
int arr[6]={5,6,2,4,8,3};
int size=sizeof(arr)/sizeof(arr[0]);

int perform(){
    printf("your element is : %d",arr[n]);
}
int main(){
    int i=0;
    printf("the size of the array is %d \n ",size);
    printf("the elements are : ");
    
    
    while(i<=size-1){
        printf("%d ,",arr[i]);
        i++;
        
    }
    printf("\n enter the indes of the element ");
    scanf("%d",&n);
    (n<size) ? perform() : printf("invalid!");
    return 0;
}
