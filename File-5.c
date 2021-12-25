#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file ;
    char ch[50];
    int d;
    file=fopen("super.txt","r");
    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {
        printf("File is opened\n");
        while(!feof(file))
        {
            fgets(ch,30,file);
            printf("%s",ch);
        }
        fclose(file);
    }
    getch();
}
