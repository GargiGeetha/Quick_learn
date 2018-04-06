/**
*Program is for converting binary number to decimal
*/

#include<stdio.h> 
#include<math.h> 

double calculate_decimal(long int n)
{
int rev, decimal=0,p=0;
while(n!=0)
{
rev=n%10;
decimal=decimal+rev*(pow(2,p));
n=n/10;
p++;
}
return decimal;
}


double calculate_mant(double decpart)
{
double a,mant=0;
int b,p=1;
while(decpart!=0.00000)
{
a=10*decpart;
b=a;
mant=(mant+(b*(1/pow(2,p))));
p++;
decpart=a-b;
}
return (mant);
}


int main()
{
float n;
int x;
double decimal,mant;
printf("\n");

printf("\nEnter a binary number to find decimal equivalent: \n\n");
scanf("%f",&n);

x=ceil(n);
int intpart=(int)n;
double decpart = n-intpart;

if (x==n)
{
printf("No decimal point\n\n");
decimal=calculate_decimal(intpart);
int eq;
eq=decimal;
printf("Decimal equivalent: %d",eq);
}
else
{
printf("decimal point is there. So..\n\n");
decimal=calculate_decimal(intpart);
mant=calculate_mant(decpart);
float num;
printf("decpart=%f\n",decimal);
printf("frcpart=%f\n",mant);
num=decimal+mant;
printf("Decimal equivalent: %f",num);
}
printf("\n\n");
return 0;
}

