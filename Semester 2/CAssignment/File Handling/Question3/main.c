#include <stdio.h>
#include <stdlib.h>
int main() {
    char name[50], string[50];
    FILE *file;
    printf("Enter File name :");
    scanf("%s",name);
    file=fopen(name,"w");
    if(file==NULL){
        printf("Error! can't open file");
        exit(1);
    }
    else{
        fflush(stdin);
        printf("Enter String :");
        scanf("%[^\n]%*c",string);
        fprintf(file,"%s",string);
    }
    return 0;
}
