#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    file=fopen("printf.txt","a");
    char name[20];
    int age;
    char college_name[20];
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened successfully \n");

        printf("Enter your name :");
        gets(name);
        printf("Enter your College name :");
        gets(college_name);
        printf("Enter your age:");
        scanf("%d",&age);

        fprintf(file,"Name :%s\nAge :%d\nCollege name :%s",name,age,college_name);
        printf("File is written successfully");

    }
    fclose(file);
    return 0;
}
