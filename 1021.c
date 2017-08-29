#include <stdio.h>
#include <math.h>

#define MAX 12

#define CEM 0
#define CINQ 1
#define VINTE 2
#define DEZ 3
#define CINCO 4
#define DOIS 5
#define M_UMREAL 6
#define M_CINQ 7
#define M_VINTECINCO 8
#define M_DEZ 9
#define M_CINCO 10
#define M_UM 11

void main(){
	double n;
	int n_int, n_cent;
	int cont[MAX];
	int i;

	for (i = 0; i<MAX; i++)
		cont[i] = 0;

	scanf(" %lf",&n);
	n*=100;
	n_int = (int)floor(n/100);
	n -= n_int*100;
	n_cent = (int)n;

	while(n_int>=100){
		n_int-=100;
		cont[CEM]++;
	}
	while(n_int>=50){
		n_int-=50;
		cont[CINQ]++;
	}
	while(n_int>=20){
		n_int-=20;
		cont[VINTE]++;
	}
	while(n_int>=10){
		n_int-=10;
		cont[DEZ]++;
	}
	while(n_int>=5){
		n_int-=5;
		cont[CINCO]++;
	}
	while(n_int>=2){
		n_int-=2;
		cont[DOIS]++;
	}
	while(n_int>=1){
		n_int-=1;
		cont[M_UMREAL]++;
	}
	while(n_cent>=50){
		n_cent-=50;
		cont[M_CINQ]++;
	}
	while(n_cent>=25){
		n_cent-=25;
		cont[M_VINTECINCO]++;
	}
	while(n_cent>=10){
		n_cent-=10;
		cont[M_DEZ]++;
	}
	while(n_cent>=5){
		n_cent-=5;
		cont[M_CINCO]++;
	}
	while(n_cent>=1){
		n_cent-=1;
		cont[M_UM]++;
	}

	
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n",cont[CEM],cont[CINQ],cont[VINTE],cont[DEZ]);
	printf("%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n",cont[CINCO],cont[DOIS],cont[M_UMREAL],cont[M_CINQ]);
	printf("%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",cont[M_VINTECINCO],cont[M_DEZ],cont[M_CINCO],cont[M_UM]);
}