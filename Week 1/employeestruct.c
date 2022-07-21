#include<stdio.h>
#include<stdlib.h>

struct employee
{
    int id;
    char name[20];
    int age;
    int basicsalary;
    int grosssalary;
};
int main()
{
    int n;
    float DA,HRA,Gross_salary;
    printf("Enter the number of employee: \n");
    scanf("%d",&n);
    struct employee em[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the ID of Employee\n");
        scanf("%d",&em[i].id);
        printf("Enter the Employee name\n");
        scanf(" %[^\n]",em[i].name);
        printf("Enter the employee age\n");
        scanf("%d",&em[i].age);
        printf("Enter the basic salary of the employee\n");
        scanf("%d",&em[i].basicsalary);
    }
    for(int k=0;k<n;k++)
    {
        DA=0.8*em[k].basicsalary;
        HRA=0.1*em[k].basicsalary;
        Gross_salary=em[k].basicsalary+DA+HRA;
        em[k].grosssalary=Gross_salary;
        printf("DA : %f\n",DA);
        printf("HRA : %f\n",HRA);
        printf("gross_salary : %f\n",Gross_salary);
        printf("\n");
    }
    printf("The Employee data's are as follows\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\t%s\t%d\t%d\n",(em[j].id),(em[j].name),(em[j].age),(em[j].grosssalary));
    }
    return 0;
}