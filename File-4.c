#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    file=fopen("super.txt","r");
    char ch;
    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {
        printf("File is opened\n");
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
    }
    getch();
}
