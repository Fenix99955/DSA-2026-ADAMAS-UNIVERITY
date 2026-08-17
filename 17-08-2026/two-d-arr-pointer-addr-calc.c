#include<stdio.h>

int rowMajor( int *base,int width, int row, int column, int totalcolumn, int totalrow,int lr,int lc){
    printf(" the mem location is %p\n",(base+width*((row-lr)*totalcolumn+(column-lc))));
 return 0;
}

int columnMajor( int *base,int width, int row, int column, int totalcolumn, int totalrow,int lr,int lc){
    printf("the mem location is %p\n",(base+width*((column-lc)*totalrow+(row-lr))));
 return 0;
}
int main(){
    int base,width,row,column,totalcolumn,totalrow,lr,lc;
    int k;
    int ir,jc;
    
    int arr[ir][jc];
    printf("enter no of row and column \n");
    scanf("%d%d",&ir,&jc);
    printf("enter elements \n");
    for(int i =0; i<ir ; i++){
        for(int j =0; j<jc ; j++){
            scanf("%d",&arr[i][j]);
        }
    }    
    printf("enter the values width row column lr lc");
    scanf("%d%d%d%d%d",&width,&row,&column,&lr,&lc);

    printf("1. row major \n2. column major \n");
    printf("enter your selection");
    scanf("%d",&k);

    (k==1)? rowMajor(*arr,width,row,column,ir,jc,lr,lc) : columnMajor(*arr,width,row,column,ir,jc,lr,lc);

    return 0;

}


