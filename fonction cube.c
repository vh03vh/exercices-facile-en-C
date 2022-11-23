#include<stdio.h>
double cube(double num);

main()
{
int num;
double c;
printf("entre the number one\n");
scanf("%d",&num);
c=cube(num*num*num);
printf("cube of num is %d :",num*num*num,c);
return 0;	
}
double cube(double num)
{
	return(num*num*num);
}
