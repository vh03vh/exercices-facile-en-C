#include<stdio.h>
main()
{
	float T[10];
	int i;
	float s,p,m;
	
	printf("veuillez saisir les elementes du tableau:\n");
	
	for(i=0 ; i<10 ; i++){
	printf("t[%d]=  ",i);

	scanf("%f",&T[i]);
}
s=0;
p=1;
for(i=0 ; i<10 ; i++){

s=s+T[i];
p=p*T[i];
}
printf("la samme des elements du tableau est:%f\n ",s);
printf("le produit des elements du tableau est:%f\n ",p);
 m=s/10;
 printf("le moyennes des elementes du tableau est:%f\n",m);
	return 0;
}
