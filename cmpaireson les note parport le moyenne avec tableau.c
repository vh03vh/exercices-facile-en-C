#include<stdio.h>
main()
{
	
	int N[10];
	float s,m;
	int nbr,i;
	printf("veuillez les elements du tableau:\n");
	for(i=0;i<10;i++){
		printf("N[%d]= ",i);
		scanf("%d",&N[i]);
	}
	s=0;
		for(i=0;i<10;i++){
		s=s+N[i];
		m=s/10;	
		
		}
printf("affiche la somme des elements est:%f\n",s);
printf("affiche le moyenne est:%f\n",m);
nbr=0;
for(i=0;i<10;i++)
	if(N[i]>m)
	nbr=nbr+1;
	printf("effiche le nomber des note qui superuire a la moyenne:%d\n",nbr);
		
	
	
	
	
}
