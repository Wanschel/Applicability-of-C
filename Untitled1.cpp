#include <stdio.h>

int main() {
int x;


	printf("Insira o numero de partida: \n");
	scanf("%d",&x);	
	//na verdade o que ocorre � que i= dita por onde come�a, i> dita o fim, e i= dita a f�rmula da conta
	
	if (x>0){
	
	
	for(x=x;x>0;x=x-1){
	//1� Parte: Atribuir um valor � vari�vel
	//2� Parte: Teste l�gico (o valor de i � menor que 101?) - retorna verdadeiro ou falso
	//3� Parte: Incremento na vari�vel. i++ ou i=i+1
		printf("%d - Executando\n",x);
	}
	
}
else {
	printf("Numero negativo");
}
	
	
	return 0;
}
