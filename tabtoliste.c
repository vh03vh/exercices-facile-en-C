#include<stdio.h>
#include<stdlib.h>
main()
{
	struct liste {
		int val ;
		struct liste *suiv;
	};
	struct liste *P;
	struct liste *tete;
	int x;
	int t[5];
	int i;int n=5;
	printf (" veuliiez saisier les elements de tableau \n");
	for(i= 0 ;i<5; i++){
		printf("t[%d] =  ",i);
		scanf("%d",&t[i]);
		
	}

	P = (struct liste *)malloc (sizeof(struct liste));

	P->val = t[0]; 
	P->suiv = NULL;
	tete = P;
	
	for(i=0;i<n; i++){
	
		P->suiv = malloc (sizeof(struct liste));
		P= P->suiv ;
		P->val = t[i];
		P->suiv = NULL;
	}
		P = tete;
	for(i=0;i<n; i++){
	printf("%d__",t[i]);

		
		 P=P->suiv;
	
	}
}
