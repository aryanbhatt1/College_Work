#include <stdio.h>
#include <stdlib.h>
struct Student{
    char name[100];
    int marks;
}s[10];
int main() {
    int number;
    FILE *file;
    file=fopen("D:\\Documents\\CAssignment\\File Handling\\Question1\\file.txt","w");
    if (file==NULL){
        printf("Error While Opening file !");
        exit(1);
    }
    else{
        printf("\nEnter number of Students :");
        scanf("%d",&number);
        fprintf(file,"%d",number);
        for (int i=0; i<number; i++){
            printf("\n-------Student %d Details-------",i+1);
            printf("\nEnter Name :");
            scanf("%s", s[i].name);
            printf("\nEnter Marks :");
            scanf("%d",&s[i].marks);
            fprintf(file,"%s",s[i].name);
            fprintf(file,"%d",s[i].marks);
        }
    }
    fclose(file);
    return 0;
}
