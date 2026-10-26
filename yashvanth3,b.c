#include<stdio.h>
int main()
{
int rowcount, columncount, i,j;
int fristmatrix[10][10],secondmatrix[10][10],resultmatix[10][10];
printf("number of rows of matrices to be subtracted :");
scanf("%d",&rowcount);
printf("number of columns of matrices to be subtracted :");
scanf("%d",&columncount);
printf("elements of first matrix : \n");
for (i=0;i<rowcount;i++)
for(j=0;j<columncount;j++)
scanf("%d",&fristmatrix[i][j]);
printf("elements of second matrix:\n");
for(j=0;j<columncount;j++)
scanf("%d",&secondmatrix[i][j]);
printf("difference of entered matrices : \n");
for (i=0;i<rowcount;i++)
{
for(j=0;j<columncount;j++)
{
resultmatix[i][j]=fristmatrix[i][j]-secondmatrix[i][j];
printf("%d\t",resultmatix[i][j]);
}
printf("\n");
}
}

