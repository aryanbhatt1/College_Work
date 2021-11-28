#include <stdio.h>
#include <stdlib.h>
void sum(int *ptr1, int *ptr2, int size1, int size2){
    int sum=0;
    for (int i=0; i<size1; i++){
        sum=sum+ptr1[i];
    }
    for (int i=0; i<size2; i++){
        sum=sum+ptr2[i];
    }
    printf("\nThe Sum of the array is %d",sum);
}
int main() {
    int *ptr, *ptr2, size2;
    //Array1
    int arr[5]={1,2,3,4,5};
    ptr=arr;
    int size1=sizeof(arr)/sizeof(arr[0]);
    printf("The Elements of first array are :");
    for(int i=0; i<size1; i++){
        printf("\t%d",ptr[i]);
    }
    //Array 2
    printf("\nEnter The Size of 2nd Array :");
    scanf("%d",&size2);
    ptr2=(int*)malloc(size2*sizeof(int));
    if(ptr2==NULL){
        printf("Memory Not Allocated!");
        exit(0);
    }
    else{
        printf("\n____Enter Array Elements____");
        for(int i=0; i<size2; i++){
            printf("\nEnter Element %d :",i+1);
            scanf("\t%d",&ptr2[i]);
        }
    }
    sum(ptr,ptr2,size1,size2);
    return 0;
}
