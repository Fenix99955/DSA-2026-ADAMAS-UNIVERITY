//accessing and transversing 2D array using for loop
#include<stdio.h>
int n,m;
int arr[2][6]={{5,6,2,4,8,3},{5,9,1,4,6,7}};
int size=sizeof(arr)/sizeof(arr[0]);
int size2=sizeof(arr[0])/sizeof(arr[0][0]);
int perform(){
    printf("your element is : %d",arr[n][m]);
}
int main(){
    int i=0;
    printf("the row and column of the array  %d %d \n ",size,size2);
    printf("the elements are : \n");
    for(int i=0;i<size;i++){
       for(int j=0;j<size2;j++){
           printf("%d,",arr[i][j]);
       }
       printf("\n");
    }

    printf("\n enter the indes of the element ");
    scanf("%d%d",&n,&m);
    (n<size)&&(m<size2) ? perform() : printf("invalid!");
    return 0;
}