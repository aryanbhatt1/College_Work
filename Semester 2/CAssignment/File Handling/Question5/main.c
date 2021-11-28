#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    FILE *file;
    file=fopen("file.txt","w");
    if (file==NULL){
        printf("Error !");
        exit(1);
    }
    else {
        printf("Enter number :");
        scanf("%d",&num);
        fprintf(file,"%d",num);
    }
    fclose(file);
    return 0;
}
