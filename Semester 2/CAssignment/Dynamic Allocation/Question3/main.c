#include <stdio.h>
#include <stdlib.h>
int main() {
    char *s;
    s=malloc(80);
    if(s==NULL){
        printf("Memory Not Allocated!");
        exit(0);
    }
    else{
        printf("Enter string :");
        gets(s);
        printf("The String is ");
        puts(s);
    }
    return 0;
}
