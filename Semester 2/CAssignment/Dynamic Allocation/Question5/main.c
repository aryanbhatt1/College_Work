#include <stdio.h>
#include <stdlib.h>

struct Student{
    int total_marks;
    char name[20];
    int roll_no;
};
int main() {
    struct Student *ptr;
    ptr=(struct  Student*)malloc(1*sizeof(struct Student));

    printf("Enter Name :");
    gets(ptr->name);
    printf("Enter Roll No :");
    scanf("%d",&ptr->roll_no);
    printf("Enter total marks :");
    scanf("%d",&ptr->total_marks);

    printf("\n------------Student Details-------------");
    printf("\nName of the Student : ");
    puts(ptr->name);
    printf("Roll No : %d", ptr->roll_no);
    printf("\nTotal Marks : %d/500",ptr->total_marks);
    return 0;
}
