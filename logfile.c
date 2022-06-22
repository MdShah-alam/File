#include<stdio.h>

int main()
{
    FILE *logfile=fopen("Log.txt","a");
    FILE *inputfile=fopen("habijabi.txt","r");

    if(inputfile==NULL)
    {
    fprintf(logfile,"Not found at 3.03 pm\n");
    return 0;
    }


    return 0;
}
