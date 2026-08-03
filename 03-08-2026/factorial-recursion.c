//factorial using recursion
#include <stdio.h>

int n,c=1;

int factorial(){
    if(n==0||n==1){
        return 1;
    }
   if (n>0){
       c=c*n;
        n--;
        factorial();
       } 
    return c;
}

int main(){

printf("enter any number");
scanf("%d",&n);

factorial();
printf("the factorial of the entered number is %d",c);
return 0;
}

