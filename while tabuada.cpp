#include <stdio.h>

int main () {
	int num, i;
	
	printf("Insira o numero da tabuada: \n");
	scanf("%d", &num);
	
	i=1;
	while (i<=10){
		
		
		printf("\n%d x %d = %d",num,i,num*i);
		i=i+1;
		
	}
	
	
	
	return 0;
}
