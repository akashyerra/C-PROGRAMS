#include<stdio.h>
struct employ{
	int empno;
	char empname[20];
	char departname[20];
	long int salary;
};
int main()
{
	int i,j,n;
	struct employ e[20];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("\nEnter employ[%d] number: ",i+1);
		scanf("%d", &e[i].empno);
		
		printf("\nEnter employ[%d] name: ",i+1);
		scanf("%s", e[i].empname);
		
		printf("\nEnter employ[%d] department name: ",i+1);
		scanf("%s", &e[i].departname, e[i].salary);
		
		printf("\nEnter employ[%d] salary: ",i+1);
		scanf("%ld", &e[i].salary);
}
		
	printf("S.NO\tEMPLOY NUMBER\tEMPLOY NAME\tDEPARTMENT NAME\tSALARY\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t%d\t\t%s\t\t%s\t\t%ld\n", i+1, e[i].empno, e[i].empname, e[i].departname, e[i].salary);
	}
	return 0;
}