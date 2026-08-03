//characterestics of the datastructures

#include<stdio.h>
void main(){
    
    while(1){
    int n;
    printf("select an option \n 1.Array \n 2.Linked_lists \n 3.Trees \n 4.Graphs \n " );
    printf("=============== \n enter your selection");
    scanf("%d",&n);
    
    switch(n){
        case 1 :
            printf("the characterestics are : \n");
            printf(" Nonlinear data structure \n Contiguous Memory \n Direct Access \n Homogeneous Data \n");
            break;
        case 2 :
            printf("the characterestics are : \n");
            printf(" Nonlinear data structure \n Dynamic Size \n Scattered Memory Pointer Chains \n Sequential Access \n");
            break;
        case 3 :
            printf("the characterestics are : \n");
            printf(" Linear datastructure \n Single Root \n Unique Paths \n No Loops \n");
            break;
        case 4:
            printf("the characterestics are : \n");
            printf(" Linear datastructure \n Vertices & Edges \n Cyclic Links \n Directional Flow \n");
            break;
        default:
            printf("Please enter a valid selection!");
    }
    

    }    
}
