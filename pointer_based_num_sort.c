#include<stdio.h>
void sort(int *a, int n);
void display(int *a, int n);
int main()
{
	int a[50], n;
	printf("Enter the number of numbers being entered: ");
	scanf("%d", &n);
	printf("Enter the numbers: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Unsorted list:  ");
	display(a, n);
	
	sort(a,n);
	return 0;
}

//Sorting function

void sort(int *a, int n)
{
	int i,j,temp=0;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
	printf("\nSorted list:  ");
	display(a,n);
}

//Display function
void display(int *a, int n)
{
	int i;
	for(int i=0; i<n; i++)
	{
		printf("%4d", a[i]);
	}
}