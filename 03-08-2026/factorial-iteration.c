//factorial using itteration


#include <stdio.h>
int main(){
    int i,n,c=1;
    printf("enter any number");
    scanf("%d",&n);
    
    if(n==1||n==0){
        c=0;
    }
    else{
        for(i=n;i>0;i--){
        c=c*i;
    }
    }
    
    printf("the factorial of the entered number is %d",c);
    
    return 0;
}
