#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct student
    {
        char name[20];
        int roll;
        int mark1;
        int mark2;
        int mark3;
        int mark4;
        int mark5;   
    };
        struct student s;
            printf("\nEnter the name of the student:");
            scanf(" %[^\n]",s.name);
            printf("\nEnter the roll no.:");
            scanf("%d",&s.roll);
            printf("\nEnter the first marks:");
            scanf("%d",&s.mark1);
            printf("\nEnter the second marks:");
            scanf("%d",&s.mark2);
            printf("\nEnter the third marks:");
            scanf("%d",&s.mark3);
            printf("\nEnter the fourth marks:");
            scanf("%d",&s.mark4);
            printf("\nEnter the fifth marks:");
            scanf("%d",&s.mark5);

    printf("%d\t%s\t%d\t%d\t%d\t%d\t%d",s.roll,s.name,s.mark1,s.mark2,s.mark3,s.mark4,s.mark5);
    
    return 0;
}