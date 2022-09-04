#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,phoneNumber,n;
    file=fopen("student.txt","a");
    if(file==NULL)
    {
        printf("File is not exist");
    }
    else
    {
        printf("File is opened \n");
        printf("Enter the number of student :");
        scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
            printf("Enter students name :");
            scanf("%s",&name);

            printf("Enter students age :");
            scanf("%d",&age);

            printf("Enter student phone number :");
            scanf("%d",&phoneNumber);

            fprintf(file,"%s\t\t%d\t%d\n",name,age,phoneNumber);
        }

        fclose(file);
    }

    getch();
}
