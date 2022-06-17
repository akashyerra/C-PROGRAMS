#include<stdio.h> 
#include<stdlib.h>
int main(int argc, char *argv[])
 {
  int x, sum=0;
   printf("\n Number of arguments are:%d",argc);
     printf("\n The agruments are:"); 
	  for(x=0;x<argc;x++)
	   {
	    printf("\n agrv[%d]=%s", x,argv[x]); 
		sum=sum+(argv[x]);
		}
		
	printf("\n program name:%s",argv[0]); 
	printf("\n name is:%s",argv[1]); 
	printf("\n sum is:%d",sum);
	  return(0);
	  } 