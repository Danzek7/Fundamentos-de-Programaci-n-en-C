#include <stdio.h>
void main ()
{
	int n, num, num_2, num_3, var, sum, sum_2;
	do
	{
	    printf("Ingrese numero: ");
	    scanf("%i",&n);
	} while(n<0);
	printf("El numero es divisible por 1");
    num=n%10;
    if(n%2==0||num==0)
    {
    	printf(", es divisible por 2");
	}
	var=trunc(n/10);
	sum=num+var;
	if(sum%3==0)
	{
		printf(", es divisible por 3");
	}
	num_2=n%100;
	if(num_2%4==0||num_2==00)
	{
		printf(", es divisible por 4");
	}
	if(num==0||num==5)
	{
		printf(", es divisible por 5");
	}
	if(n%2==0&&n%3==0)
	{
		printf(", es divisible por 6");
	}
	sum_2=num*2-var;
	if(sum_2%7==0||sum_2==0)
	{
		printf(", es divisible por 7");
	}
	num_3=n%1000;
	if(num_3%8==0||num_3==00)
	{
		printf(", es divisible por 8");
	}
	if(sum%9==0)
	{
		printf(", es divisible por 9");
	}
}
