#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    file=fopen("test.txt","r");
    char fname[20];
    char mname[20];
    char lname[20];
    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {
        printf("File is opened\n");

        fscanf(file,"%s %s %s",&fname,&mname,&lname);
        printf("%s %s %s",fname,mname,lname);
    }
    fclose(file);
    getch();
}
