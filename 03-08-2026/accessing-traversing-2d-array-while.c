//accessing and traversing 2D array using while loop
#include<stdio.h>
int n,m,i=0,j=0;
int arr[2][6]={{5,6,2,4,8,3},{5,9,1,4,6,7}};
int size=2;
int size2=6;
int perform(){
    printf("your element is : %d",arr[n][m]);
}
int main(){
    printf("the row and column of the array  %d %d \n ",size,size2);
    printf("the elements are : \n");
    while(i<size){
        while(j<size2){
            printf("%d,",arr[i][j]);
            j++;
        }
        i++;
        j=0;
        printf("\n");
    }

    printf("\n enter the indes of the element ");
    scanf("%d%d",&n,&m);
    (n<size)&&(m<size2) ? perform() : printf("invalid!");
    return 0;
}
