#include<stdio.h>
int main()
{
int rowcountone,columncountone,rowcounttow,columncounttow,i,j,k,sum=0;
int firstmatrix[10][10],secondmatrix[10][10],resultmatrix[10][10];
printf("number of rows in first matrix:");
scanf("%d",&columncountone);
printf("number of columns in first matrix :");
scanf("%d",&columncountone);
printf("elements of first matrix:\n");
for(i=0;i<rowcountone;j++);
for(j=0;j<columncountone;j++)
scanf("%d",&rowcounttow);
printf("number of rows in second matrix:");
scanf("%d",&columncounttow);
if(columncountone !=rowcounttow)
printf("matrix with entered orders cannot be multiplied.\n");
else
{
printf("elements of second matrix :\n");
for (i=0;i<rowcounttow;i++)
for(j=0;j<columncounttow;j++)
scanf("%d",&secondmatrix[i][j]);
for(i=0;i<rowcountone;i++){
for(j=0;j<columncounttow;j++){
for(k=0;k<rowcounttow;k++){
sum=sum+firstmatrix[i][k]*secondmatrix[k][j];
}resultmatrix[i][j]=sum;
sum=0;
}
}
printf("after multiplication, the result is :\n");
for(i=0;i<rowcountone;i++){
for(j=0;j<columncounttow;j++)
printf("%d\t",resultmatrix[i][j]);
printf("\n");
}
}
return 0;
}
