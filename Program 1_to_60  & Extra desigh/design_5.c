#include<stdio.h>
int main()
{
    int i,j,a[2][2],b[2][2],c[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

      printf("enter the value of a[%d][%d]\n",i,j);
      scanf("%d",&a[i][j]);
        }
    }
    {

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            {
            printf("enter the value of b[%d][%d]\n",i,j);
            scanf("%d",&b[i][j]);
            }
    }
    }
        for(i=0;i<2;i++)
        {
         for(j=0;j<2;j++)
         {
            c[i][j]=a[i][j]+b[i][j];
            printf("c[%d][%d]=%d\n",i,j,c[i][j]);
        }
        }
getchar();
}

