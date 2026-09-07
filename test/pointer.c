#include<stdio.h>
int main(){
    int n =90;
    int *p=&n;    

    printf("%d\n",n);
    printf("%d\n",*p);
    printf("%p\n",&n);
    printf("%p\n",p);
    printf("%p\n",&*p);
    printf("%p\n",&p);

    return 0;
}