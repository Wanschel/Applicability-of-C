#include <stdio.h>

int main () {
	int factor,i;
	
	printf("Insert a number");
	scanf("%d", &factor);

//Primeiramente, definimos o ponto de partida, 
//atribuindo um valor inicial do contador, que é o i
	
	i=0;
	
//Em seguida, determinamos o "fim" desse valor i, no modelo "while (i fim)". Usa-se parenteses como em if / else

	while (i <=10) {
//Aqui coloquei uma linha para multiplicarmos outra variável.		
		printf("%d x %d = %d\n",i,factor,(i*factor));
		
//por fim, determinamos o "coeficiente de cálculo, isto é, se somaremos, subtrairemos, etc). Neste caso, ao i soma-se 1, então i++.
		i++;
		
		
	}
  
	
	return 0;
}
