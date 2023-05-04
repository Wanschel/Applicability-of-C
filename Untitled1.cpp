#include <stdio.h>

int main() {
int x;


	printf("Insira o numero de partida: \n");
	scanf("%d",&x);	
	//na verdade o que ocorre é que i= dita por onde começa, i> dita o fim, e i= dita a fórmula da conta
	
	if (x>0){
	
	
	for(x=x;x>0;x=x-1){
	//1ª Parte: Atribuir um valor à variável
	//2ª Parte: Teste lógico (o valor de i é menor que 101?) - retorna verdadeiro ou falso
	//3ª Parte: Incremento na variável. i++ ou i=i+1
		printf("%d - Executando\n",x);
	}
	
}
else {
	printf("Numero negativo");
}
	
	
	return 0;
}
