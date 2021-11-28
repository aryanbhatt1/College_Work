#include <stdio.h>
#include <stdlib.h>

struct Book {
    char name[20];
    char author[20];
    int pages;
}b;

int main() {

    int number,n;
    FILE *file;

    file=fopen("D:\\Documents\\CAssignment\\File Handling\\Question2\\file.txt","w");

    if (file==NULL) {
        printf("Error Opening File !");
        exit(1);
    }
    else {
        printf("\nEnter number of Book :");
        scanf("%d",&number);
        for(int i=0; i<number; i++) {
            fflush(stdin);
            printf("\n-----Enter Book %d Details------\n",i+1);
            printf("Enter name of book:");
            scanf("%[^\n]%*c",b.name);
            printf("Enter name of author:");
            scanf("%[^\n]%*c",b.author);
            printf("Enter Number of pages :");
            scanf("%d",&b.pages);
            n = fwrite(&b, sizeof(b), 1, file);
        }
        printf("\nNumber of Items Written is %d",n);
    }

    fclose(file);

    FILE *file1;
    file1 = fopen("D:\\Documents\\CAssignment\\File Handling\\Question2\\file.txt","r");
    if (file1==NULL) {
        printf("Error Opening File !");
        exit(1);
    }
    else{
        int i=0;
        while(fread(&b,sizeof(b),1,file1)>0){
            printf("\n-----Book %d Details------\n",i+1);
            printf("\nBook Name : %s",b.name);
            printf("\nBook Author : %s",b.author);
            printf("\nBook Pages : %d",b.pages);
            i++;
        }
    }
    fclose(file1);
    return 0;
}
