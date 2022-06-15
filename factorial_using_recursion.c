#include<stdio.h>
long int rec(int);
long int non(int);
void main()
{
	int x;
	scanf("%d", &x);
	if(x>=1)
	{
		printf("The factorial of the given number is: %ld", rec(x));
		printf("\nThe factorial of the given number using non is: %ld", non(x));
	}
	else if(x==0){
		printf("the factorial of 0 is 1");
	}
	else{
		printf("Enter a positive value\n");
	}
	
}
long int rec(int t)
{
	if(t>=1){
	return t*rec((t-1));
}
else{
return 1;
}
}
long int non(int t)
{
	long int fact=1, i;
	for(i=1; i<=t; i++)
	{
		fact=fact*i;
	}
	return fact;
}