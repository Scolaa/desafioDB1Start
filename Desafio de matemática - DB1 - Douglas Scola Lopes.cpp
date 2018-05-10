//Desafio de matemática - DB1 - Douglas Scola Lopes.

//bibliotecas usadas para este algoritmo.
#include <stdio.h> //que contém os comandos printf e scanf.
#include <stdlib.h> //usada como emulador de prompt de comando do sistema operacional.
#include <conio.h> //usada para funções de leitura escrita. "exemplo: getch".
#include <ctype.h> //contém o padrão ANSI, usada para manipulação de caracteres.
#include <locale.h> //usada para regiões, acentos e pontuações.

int main(void){ //início do código.
	
	setlocale (LC_ALL, "Portuguese_Brazil"); //comando de regionalização.
	
	//variáveis para leitura de informações do usuário.
	char letras[64];
	char L;
	int numero = 0;
	int i = 0;
	
	//pedir para um usuário informar um número.
	printf (" Informe um número entre 0 e 100: ");
	
	//laço de repetição do tipo Do While, para impedir que o usuário informe um caractere que não seja número.
	do 
	{
		L=getch();
		if (isdigit(L)!=0){
			letras[i] = L;
			i++;
			printf ("%c", L);
		} else if (L ==8&&i){
			letras[i]='\0';
			i--;
			printf ("\b \b");
		}
	} while (L!=13);
	
	letras[i]='\0';
	numero = atoi(letras);
	
	printf ("\n O número informado é: %d\n\n", numero);
	
	//laço do tipo while que irá verificar o número informado pelo usuário e imprimir uma resposta na tela.
	while (numero > 100){
		numero--;
		printf (" Número maior que 100. Número Inválido!");
	}

	//estrutura condicional composta que fará o cálculo se o número é par ou impar e retorna o resultado na tela.
		if (numero % 2 == 0){
		printf ("\n O número é PAR! não é impar.");
	} else {
		printf ("\n O número é IMPAR! não é par.");
	}

	//estrutura condicional composta que verifica se o número é maior, menor ou igual a 10 e imprime oo resultado na tela.
	if (numero < 10){
		printf ("\n O número %d é menor que 10.", numero);
	} else if (numero > 10){
		printf ("\n O número %d é maior que 10.", numero);
	} else {
		printf ("\n O número é igual a 10.");
	}

	//laço do tipo for usado para multiplicar o número por 2 e retornar a tela.
	
	for (i = numero; i <= numero; i++){
		i *=2;
		printf ("\n O dobro de %d é %d.", numero, i);
	}
	
	//estrutura condional composta que verifica se o número é primo de 0 a 100 e retorna na tela.		
	if ((numero == 2) || ( numero == 3) || (numero == 5) || ( numero == 7) || ( numero == 11) || ( numero == 13) ||
	( numero == 17) || ( numero == 19) || ( numero == 23) || ( numero == 29) || ( numero == 31) || ( numero == 37) ||
	( numero == 41) || ( numero == 43) || ( numero == 47) || ( numero == 53) || ( numero == 59) || ( numero == 61) ||
	( numero == 67) || ( numero == 71) || ( numero == 73) || ( numero == 79) || ( numero == 83) || ( numero == 89) || ( numero == 97)){
		
		printf ("\n O %d número é primo.", numero);
	} else {
		printf ("\n O número %d NÃO é primo.", numero);
	} 
	
	printf ("\n\n Obrigado por participar! :)\n\n");
	
	//usada para que o programa não se finalize automaticamente.
	system ("pause");
	
	//indica o valor de retorno da função. No caso 0, indica que o programa terminou sem erros.
	return (0);
	
	
}
