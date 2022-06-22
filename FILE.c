#include<stdio.h>

int main()
{
    FILE *inputfile=fopen("in_2.txt","r");
    int a,b;
    scanf("%d  %d",&a,&b);
    int sum=a+b;
    fprintf(inputfile,"%d",sum);
    fclose(inputfile);

}
