#include<stdio.h>
int main()
{
int n,reverse=0;remainder,orginal;
printf("the number is");
scanf("%d",&n);
orginal=n;
while(n!=0)
{
remainder=n%10;
reverse=reverse*10;
n=n/10
}
if(orginal==remainder)
printf("the number is polyndrome");

return 0;
}
