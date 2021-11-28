#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    FILE *file;
    file=fopen("file.txt","r");
    if(file==NULL) {
        printf("Error !");
        exit(1);
    }
    else{
        fscanf(file,"%d",&num);
        printf("Number is %d",num);
    }
    fclose(file);
}
