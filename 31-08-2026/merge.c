#include <stdio.h>

void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int l[n1], m[n2];

    for(int i=0;i<n1; i++){
        l[i]=arr[p+i];
    }



    for(int j=0;j<n2;j++){
        m[j]=arr[q+j+1];
    }
    

    int i=0,j=0,k=p;

    while(i<n1 && j<n2){
        if(l[i]<=m[j]){
            arr[k]=l[i];
            i++;
        }
        else{
            arr[k]=m[j];
            j++;
        }
        k++;
    }


    while(i<n1){
        arr[k]=l[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]=m[j];
        j++;
        k++;
    }


}





int main() {
    int arr[8] = {8,4,3,1,6,9,7,5}; 
    merge(arr,0,3,7);
    
    for (int i = 0; i <8; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
