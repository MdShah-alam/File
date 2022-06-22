#include<stdio.h>
#include<stdbool.h>
#include<string.h>

struct Student
{
    char name[20];
    int id;
    int marks;
};
struct Unique_student
{
    char name[20];
    int id;
    int total;
};
int main()
{
    FILE *input_file=fopen("input_2.txt","r");

    if(input_file==NULL)
    {
        printf("File not found \n");
        return 0;
    }
    FILE *output_file=fopen("output_2.txt","w");
    int n;
    fscanf(input_file,"%d",&n);
    struct Student students[n];
    struct Unique_student unique_students[n];
    int k=0;

    for(int i=0; i<n; i++)
    {
        fscanf(input_file,"%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
        bool found=false;
        for(int j=0; j<k; j++)
        {
            if(unique_students[j].id==students[i].id)
            {
                unique_students[j].total+=students[i].marks ;
                found=true ;
            }
        }
        if(found==false)
        {
            strcpy(unique_students[k].name,students[i].name);
            unique_students[k].id=students[i].id;
            unique_students[k].total=students[i].marks;
            k++;
        }
    }

    for(int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(unique_students[i].total<unique_students[j].total)
            {
                struct Unique_student temp=unique_students[i];
                unique_students[i]=unique_students[j];
                unique_students[j]=temp;
            }
        }
    }
    for(int i=0; i<k; i++)
    {
        fprintf(output_file,"%s %d %d\n",unique_students[i].name,unique_students[i].id,unique_students[i].total);
    }
}
