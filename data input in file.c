#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20]=" shah-alam";
    int length=strlen(name);
    FILE *file;
    file=fopen("test.txt","a");
    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {
        printf("File is opened\n");
        for(int i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully");
        fclose(file);
    }
    getch();
}

