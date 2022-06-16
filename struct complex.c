#include<stdio.h>
#include<stdlib.h>
typedef struct {
	float real;
	float img;
}complex;

complex add(complex c1, complex c2);
complex subt(complex c1, complex c2);
complex multi(complex c1, complex c2);
void read(complex *c);
void display(complex c);

int main()
{
	complex c1, c2, res;
	read(&c1);
	read(&c2);
	res=add(c1, c2);
	
	printf("\nSum is: ");
	display(res);
	
	res=subt(c1, c2);
	printf("\nDifference is: ");
	display(res);
	
	res=multi(c1, c2);
	printf("\nProduct is: ");
	display(res);
	
	return 0;
}

complex add(complex c1, complex c2)
{
	complex c;
	c.real= c1.real + c2.real;
	c.img = c1.img + c2.img;
	return (c);
}

complex subt(complex c1, complex c2)
{
	complex c;
	c.real= c1.real - c2.real;
	c.img = c1.img - c2.img;
	return (c);
}

complex multi(complex c1, complex c2)
{
	complex c;
	c.real = (c1.real*c2.real)+(c1.img*c2.img);
	c.img = (c1.real*c2.img)+(c1.img*c2.real);
	return (c);
}

void read(complex *c)
{
	scanf("%f %f", &c->real, &c->img);
}
void display(complex c)
{
	if(c.img<0)
	{
		printf("%.2f - i %.2f", c.real, c.img);
	}
	
	else
	{
		printf("%.2f + i %.2f", c.real, c.img);
	}
}