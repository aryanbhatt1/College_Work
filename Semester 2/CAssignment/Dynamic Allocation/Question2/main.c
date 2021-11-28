#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr1   = (int*)malloc(1*sizeof(int));
    char *ptr2  = (char*)malloc(1*sizeof(char)*1);
    float *ptr3 = (float*)malloc(1*sizeof(float));
    printf("Enter Value for integer pointer :");
    scanf("%d", ptr1);
    printf("Enter value for character pointer :");
    scanf("%c", ptr2);
    printf("Enter value for float pointer :");
    scanf("%f", ptr3);
    printf("\nThe value of integer pointer is %d", *ptr1);
    printf("\nThe value of character pointer is %c", *ptr2);
    printf("\nThe value of float pointer is %f", *ptr3);
    free(ptr1);
    free(ptr2);
    free(ptr3);
    return 0;
}
