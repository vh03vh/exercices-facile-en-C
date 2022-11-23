#include<stdio.h>
main()
{
	
	float u[3],v[3];
	int i;
	float p;
	printf("veulliez saisir les elements du tableau:\n");
	for(i=0;i<3;i++){
	
	printf("u[%d]= ",i);
	scanf("%f",&u[i]);  
	
		printf("v[%d]= ",i);
	scanf("%f",&v[i]);
}
	p=0;
for(i=0;i<3;i++)
{
p=p+u[i]*v[i];	
}
printf("le produites scalaire entre les ddeux tableaux est:%f",p);
		
}


