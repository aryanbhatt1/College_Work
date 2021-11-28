#include <stdio.h>
struct Date{
    int dd;
    int mm;
    int yy;
};
struct Employee
{
    int employeeID;
    char name[20];
    int salary;
    struct Date DateOfJoining;
}s[10];
void Difference(struct Date temp,int number){
    for (int i=0; i<number; i++)
    {
        if ((s[i].DateOfJoining.yy-temp.yy>=10) && (s[i].DateOfJoining.mm-temp.mm==0) && (s[i].DateOfJoining.dd-temp.dd==0))
        {
            printf("\nEmployee ID : %d",s[i].employeeID);
            printf("\nName : %s",s[i].name);
            printf("\nSalary : %d",s[i].salary);
            printf("Date Of Joining : %d-%d-%d",s[i].DateOfJoining.dd,s[i].DateOfJoining.mm,s[i].DateOfJoining.yy);
        }
    }
}
int main() {
    int number;
    printf("\nEnter Number of Employees :");
    scanf("%d",&number);
    for (int i=0; i<number; i++)
    {
        printf("\n___Enter Employee %d Details___",i+1);
        printf("\nEnter Employee ID :");
        scanf("%d",&s[i].employeeID);
        printf("Enter Employee name :");
        scanf("%s",s[i].name);
        printf("Enter Employee Salary :");
        scanf("%d", &s[i].salary);
        printf("Enter Date Of Joining :");
        scanf("%d %d %d", &s[i].DateOfJoining.dd,&s[i].DateOfJoining.mm,&s[i].DateOfJoining.yy);
    }
    struct Date temp;
    printf("Enter Today's Date");
    scanf("%d %d %d",&temp.dd,&temp.mm,&temp.yy);
    Difference(temp,number);
}
