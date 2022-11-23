#include<stdio.h>
//void echang(int x ,int y){
	//int tmp;
	//tmp=x;
	//x=y;
	//y=tmp;
	
//}
//main()
//{
//int a=1;
//int b=2;
//printf("a=%d\n ,b=%d \n",a,b);
//echang(a,b);
//printf("a=%d\n,b=%d\n",a,b);
//return 0;	
	/*les valeur ne chang pas*/
	
//}
/*passage par aderss*/
void echang(int *x ,int *y){
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
	
}
main()
{
int a=1;
int b=2;
printf("a=%d\n b=%d \n",a,b);
echang(&a,&b);
printf("a=%d\n  b=%d\n",a,b);
return 0;	
	
	
}
