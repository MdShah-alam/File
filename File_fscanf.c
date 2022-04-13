#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    file=fopen("name.txt","r");
    char name[20],funiversity_name[20],luniversity_name[20];
    int age;
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        //printf("File is opened successfully\n");
        fscanf(file,"%s%d%s%s",&name,&age,&funiversity_name,&luniversity_name);
        printf("Name :%s\nAge :%d\nUniversity :%s %s",name,age,funiversity_name,luniversity_name);
    }
    fclose(file);
    getch();
}
