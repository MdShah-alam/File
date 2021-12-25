#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    char name[50];
    int age;
    file=fopen("super.txt","a");
    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {
        printf("File is opened\n");

        printf("Enter your name:");
        gets(name);

        printf("Enter your age:");
        scanf("%d",&age);

        fprintf(file,"Name :%s ; Age :%d ",name,age);
        fclose(file);
        printf("\n");
    }
    getch();
}
