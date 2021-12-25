#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file ;
    char name[50];
    file=fopen("Shah-alam.txt","w");
    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name :");
        gets(name);

        fputs(name,file);
        fclose(file);
    }
    getch();
}
