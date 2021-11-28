#include <stdio.h>

struct Date
{
    int dd,mm,yy;

};
struct Employee
{
    int employee_id;
    char name[50];
    int salary;
    struct Date DOJ;
};

void Increment(int);

void Increment(int salary)
{
    if (salary<=1000)
    {
        salary=salary+salary*(0.1);
        printf("New salary :%d",salary);
    }
    else if (salary>1000 && salary<=4000)
    {
        salary=salary+salary*(0.9);
        printf("New salary :%d",salary);
    } else if(salary>4000) {
        printf("No Increment");
    }
}
int main() {
    int choice,number;
    printf("\nEnter Number of Employees :");
    scanf("%d", &number);
    struct Employee e[number];
    do{
        printf("\n1.Adding Employees Details\n2.Incrementing Salary\n3.Exit");
        printf("\nEnter choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                for (int i=0; i<number; i++)
                {
                    printf("Enter Employee Name :");
                    scanf("%s",&e[i].name[0]);
                    printf("\nEnter Employee ID :");
                    scanf("%d",&e[i].employee_id);
                    printf("\nEnter Employee Salary :");
                    scanf("%d",&e[i].salary);
                    printf("\nEnter Date Of Joining :");
                    scanf("%d %d %d",&e[i].DOJ.dd,&e[i].DOJ.mm,&e[i].DOJ.yy);
                }
            }
            break;
            case 2:
            {
                for (int i=0; i<number; i++)
                {
                    Increment(e[i].salary);
                }
            }
            break;
        }
    }while(choice!=3);
    return 0;
}
