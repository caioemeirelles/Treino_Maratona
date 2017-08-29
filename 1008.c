#include <stdio.h>

void main(){
	int n, hours;
	float salary;
	scanf(" %d%d%f",&n,&hours,&salary);
	printf("NUMBER = %d\nSALARY = U$ %.2f\n",n,hours*salary);
}