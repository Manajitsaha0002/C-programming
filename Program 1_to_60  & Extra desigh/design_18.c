#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
}s[4];
int main()
{
    int i;
    printf("enter deatils here:\n");
    for(i=0;i<=3;i++)
    {
     s[i].roll=i+1;
     printf("enter student name:");
     scanf("%s",s[i].name);
     printf("enter roll no:");
     scanf("%d",&s[i].roll);
     printf("enter marks:");
     scanf("%f",&s[i].marks);
    }
    for(i=0;i<=3;i++)
    {
    printf("\n\nName=%s\troll=%d\tmarks=%f",s[i].name,s[i].roll,s[i].marks);
    }
    return 0;
}














































































































































































































































































































































































































































































































































































