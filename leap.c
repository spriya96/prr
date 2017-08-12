#include<stdio.h>
int main()
{
long int year;
int n;
scanf("%ld",&year);
n=year%4;
if(n==0)
{
printf("the given year is leap year");
}
else
{
printf("the given year is not a leap year");
}
return0;
}
