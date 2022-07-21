#include <stdio.h>
#include <stdlib.h>
struct marks
    {
        int mark1;
        int mark2;
        int mark3;
        int mark4;
        int mark5;
    };
struct student
{
    char name[20];
    int roll;
    struct marks m;
    int totalmarks;
    float percentage;  
};

void displayStudentDetails(struct student stu[], int stu_number){
int i;
for(i=0;i<stu_number;i++)
{
    stu[i].totalmarks=stu[i].m.mark1+stu[i].m.mark2+stu[i].m.mark3+stu[i].m.mark4+stu[i].m.mark5;
    stu[i].percentage=(stu[i].totalmarks/5);
}
for(i=0;i<stu_number;i++)
{
    printf("\nTotal Marks of Student %d: %d",i+1,stu[i].totalmarks);
    printf("\nPercentage of Student %d: %.2f",i+1,stu[i].percentage);
}

}
void searchByRoll(struct student stu[], int stu_number){
    int i,rollNo;
    printf("Enter the Roll number you want to search:");
    scanf("%d",&rollNo);
    for(i=0;i<stu_number;i++){
        if(rollNo==stu[i].roll){
            printf("\nName of Student %d: %s",i+1, stu[i].name);
            printf("\nRoll No: %d",stu[i].roll);
            printf("\nTotal Marks: %d",stu[i].totalmarks);
            printf("\nPercentage: %.2f",stu[i].percentage);
        }
    }
}

void sortByMarks(struct student stu[], int stu_number)
{
    int i,j;
    for(i=0;i<stu_number;i++)
    {
        for(j=0;j<stu_number;j++)
        {
            if(stu[j].totalmarks>stu[j+1].totalmarks)
            {
                struct student temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
        }
    }
}
void percentRange(struct student stu[],int stu_number)
{
    int i, range1, range2;
    printf("Enter the starting of range of percentage:");
    scanf("%d",&range1);
    printf("Enter the end of range of percentage:");
    scanf("%d",&range2);
    for(i=0;i<stu_number;i++){
        if(range1>=stu[i].percentage && range2<=stu[i].percentage)
        {
            printf("\nName of Student %d: %s",i+1,stu[i].name);
            printf("\nRoll of Student %d: %d",i+1,stu[i].roll);
            printf("\nTotal Marks of Student %d: %d",i+1,stu[i].totalmarks);
            printf("\nPercentage of Student %d: %.2f",i+1,stu[i].percentage);
        }
    }

}
int main()
{
        int n;
        printf("Enter the number of students:");
        scanf("%d",&n);
        struct student s[n];
        for (int i = 0; i < n; i++)
        {
            printf("\nEnter the name of the student:");
            scanf(" %[^\n]",s[i].name);
            printf("\nEnter the roll no.:");
            scanf("%d",&s[i].roll);
            printf("\nEnter the first marks:");
            scanf("%d",&s[i].m.mark1);
            printf("\nEnter the second marks:");
            scanf("%d",&s[i].m.mark2);
            printf("\nEnter the third marks:");
            scanf("%d",&s[i].m.mark3);
            printf("\nEnter the fourth marks:");
            scanf("%d",&s[i].m.mark4);
            printf("\nEnter the fifth marks:");
            scanf("%d",&s[i].m.mark5);
        }
        displayStudentDetails(s,n);
        printf("\n\n");
        searchByRoll(s,n);
        printf("\n\n");
        sortByMarks(s,n);
        percentRange(s,n);
        return 0;
}