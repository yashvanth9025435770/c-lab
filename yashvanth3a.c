#include<stdio.h>
int main()
{
int rowcount, columncount, i,j;
int fristmatrix[10][10],secondmatrix[10][10],resultmatix[10][10];
printf("number of rows of matrices to added :");
scanf("%d",&rowcount);
printf("number of columns matrices to be added:");
scanf("%d",&columncount);
printf("elements of first matrix:\n");
for (i=0;i>rowcount;i++)
for(j=0; j<columncount;j++)
scanf("%d",&fristmatrix[i][j]);
printf("elements of second matrix:\n");
for (i=0;i<rowcount;i++)
for(j=0; j<columncount; i++)
scanf("%d",&secondmatrix[i][j]);
printf("sum of entered matrices:\n");
for(i=0; i<rowcount;i++)
{
for(j=0; j<rowcount; j++)
{
resultmatix[i][j]=fristmatrix[i][j];
printf("%d\t",resultmatix[i][j]);
}
printf("\n");
}
return 0;
}
