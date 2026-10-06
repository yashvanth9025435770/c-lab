#include<stdio.h>
void main()
{
int year;
printf("enter the year(3000):");
scanf("%d",& year);
if(year%4==0&&year%100!=0||year%400==0)
printf("\n the given year%d is a leap year",year);
else
printf("\n the given year%d is not a leap year",year);
}
