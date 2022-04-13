#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    file=fopen("students.txt","a");
    char name[20];
    int age,roll,phone_number;
    int num, i=1;
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened successfully\n");
        printf("Enter the numbers of students :");
        scanf("%d",&num);

        for(i=1; i<=num; i++)
        {
            printf("Enter the name of student :");
            scanf("%s",&name);
            printf("Enter the age of student :");
            scanf("%d",&age);
            printf("Enter the roll of student :");
            scanf("%d",&roll);
            printf("Enter the Phone number of student :");
            scanf("%d",&phone_number);

            fprintf(file,"%s\t%d\t%d\t\t%d\n",name,age,roll,phone_number);
        }
    }
    fclose(file);
    getch();
}
