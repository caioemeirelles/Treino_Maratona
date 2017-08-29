#include <stdio.h>
#include <string.h>

void main(){
	float salary, sales;
	scanf(" %*s%f%f",&salary,&sales);
	printf("TOTAL = R$ %.2f\n",salary + 0.15*sales);
}