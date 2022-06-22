#include<stdio.h>

int main()
{
    FILE* outputfile=fopen("output.txt","r");

    int count=0;

    while(1)
    {
        char ch=fgetc(outputfile);

        if(ch==EOF)
        {
            break;
        }
        count++;
    }
    printf("%d",count);
}
