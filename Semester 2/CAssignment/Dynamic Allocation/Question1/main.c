#include <stdio.h>
#include <stdlib.h>
void sum(int *ptr, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+ptr[i];
    }
    printf("\nThe sum is %d ",sum);
}
int main() {
    int size, *ptr;
    printf("Enter Number of elements :");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
    if (ptr==NULL){
        printf("\nMemory Not allocated ! ");
        exit(0);
    }
    else{
        printf("Memory Allocated Successfully\n");
        for(int i=0; i<size; i++){
            printf("Enter element :");
            scanf("%d",&ptr[i]);
        }
        printf("The elements are :");
        for(int j=0; j<size; j++){
            printf("\t%d",ptr[j]);
        }
    }
    sum(ptr,size);
    return 0;
}
