#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the element of first matrix\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("Enter the element of second matrix\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
    }
    printf("addition of two matrix\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}
  printf("The sum is %d\n");
  for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        printf("the sum is %d",c[i][j]);
    }
}
}
