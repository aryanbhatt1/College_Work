#include <stdio.h>
#include <stdlib.h>

struct Student{
    int total_marks;
    char name[20];
    int roll_no;
};
int main() {
    struct Student *ptr;
    int number;
    ptr=(struct  Student*)malloc(1*sizeof(struct Student));

    printf("\nEnter number of Students :");
    scanf("%d",&number);

    for(int i=0; i<number; ++i){
        printf("\n--------- Enter Student %d Details---------",i+1);
        printf("\nEnter Name :");
        scanf("%s",(ptr+i)->name);
        printf("Enter Roll No :");
        scanf("%d",&(ptr+i)->roll_no);
        printf("Enter total marks :");
        scanf("%d",&(ptr+i)->total_marks);
    }
    for (int i=0; i<number; ++i){
        printf("\n------------Student %d Details-------------",i+1);
        printf("\nName of the Student : %s",(ptr+i)->name);
        printf("\nRoll No : %d", (ptr+i)->roll_no);
        printf("\nTotal Marks : %d/500",(ptr+i)->total_marks);
    }
    return 0;
}
