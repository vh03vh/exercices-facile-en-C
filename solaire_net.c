#include<stdio.h>
main()
{
	float  solaire_base,solaire_net,i1,i2,ind1,ind2,X1,X2,inpot;
	
	printf("please entre the solaire totale\n");
	scanf("%f",&solaire_base);
	printf("please entre the IND1\n");
	scanf("%f",&i1);
	printf("please entre the IND2\n");
	scanf("%f",&i2);
	printf("entre les inpot svp");
	scanf("%f",&inpot);
	ind1=solaire_base*(i1/100);
	printf("ind1 is:%f\n",ind1);
	
	ind2=solaire_base*(i2/100);
	printf("ind2 is :%f\n",ind2);
	
	X1=solaire_base+ind1+ind2;
	printf("X1 is:%f\n",X1);
	
	X2=X1*(inpot/100);
	printf("X2 is:%f\n",X2);
	
	solaire_net=X1-X2;
	printf("solaire_net is:%f\n",solaire_net);
	
}
