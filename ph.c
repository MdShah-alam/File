#include<stdio.h>

int main()
{
    FILE *inputfile;
    FILE *outputfile;
    inputfile=fopen("input.txt","r");

    outputfile=fopen("output.txt","w");

    if(inputfile==NULL)
    {
        printf("Not found\n");
        return 0;
    }

    int n;
    fscanf(inputfile,"%d",&n);
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        int a;
        fscanf(inputfile,"%d",&a);
        sum+=a;
    }

    fprintf(outputfile,"sum->%d",sum);

    return 0;
}
