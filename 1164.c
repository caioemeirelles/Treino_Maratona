#include <stdio.h>

void main(){
	int i, j, n, soma;

	int vet[100];

	scanf(" %d",&n);
	for(i=0; i<n; i++)
		scanf(" %d",&vet[i]);

	for(i=0; i<n; i++){
		for(j=1; j<=vet[i]/2; j++)
			if (vet[i]%j == 0)
				soma += j;
		if (soma == vet[i])
			printf("%d eh perfeito\n",vet[i]);
		else
			printf("%d nao eh perfeito\n",vet[i]);
		soma = 0;
	}
		
}