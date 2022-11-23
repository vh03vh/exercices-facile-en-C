#include<stdio.h>
double racine_carre(double num);

main()
{
int num;
double c;
printf("entre the number one\n");
scanf("%d",&num);
c=racine_carre(num*num);
printf("racine carrée of num is %d :",num*num,c);
return 0;	
}
double racine_carre(double num)
{
	return(num*num);
}
