#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    char original[30]="Thakurgaon government college";
    int length=strlen(original);
    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("File is not opened");
    }
    else
    {
        printf("File is opened\n");
        for(int i=0; i<=length; i++)
        {
            fputc(original[i],file);
        }
        printf("File is written successfully");
        fclose(file);
    }
    getch();
}
