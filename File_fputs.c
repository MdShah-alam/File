#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    file=fopen("name.txt","w");
    char name[50],age[50],college_name[50];

    if(file==NULL)
    {
        printf("File does not exist ");
    }
    else
    {
        printf("File is opened successfully \n");

        printf("Enter your name :");
        gets(name);
        printf("Enter your age :");
        gets(age);
        printf("Enter your College name :");
        gets(college_name);

        fputs(name,file);
        fputs("\n",file);
        fputs(age,file);
        fputs("\n",file);
        fputs(college_name,file);
        fputs("\n",file);
        printf("File is written successfully");
    }
    fclose(file);
    return 0;
}
