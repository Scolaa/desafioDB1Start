//Desafio de matem�tica - DB1 - Douglas Scola Lopes.

//bibliotecas usadas para este algoritmo.
#include <stdio.h> //que cont�m os comandos printf e scanf.
#include <stdlib.h> //usada como emulador de prompt de comando do sistema operacional.
#include <conio.h> //usada para fun��es de leitura escrita. "exemplo: getch".
#include <ctype.h> //cont�m o padr�o ANSI, usada para manipula��o de caracteres.
#include <locale.h> //usada para regi�es, acentos e pontua��es.

int main(void){ //in�cio do c�digo.
	
	setlocale (LC_ALL, "Portuguese_Brazil"); //comando de regionaliza��o.
	
	//vari�veis para leitura de informa��es do usu�rio.
	char letras[64];
	char L;
	int numero = 0;
	int i = 0;
	
	//pedir para um usu�rio informar um n�mero.
	printf (" Informe um n�mero entre 0 e 100: ");
	
	//la�o de repeti��o do tipo Do While, para impedir que o usu�rio informe um caractere que n�o seja n�mero.
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
	
	printf ("\n O n�mero informado �: %d\n\n", numero);
	
	//la�o do tipo while que ir� verificar o n�mero informado pelo usu�rio e imprimir uma resposta na tela.
	while (numero > 100){
		numero--;
		printf (" N�mero maior que 100. N�mero Inv�lido!");
	}

	//estrutura condicional composta que far� o c�lculo se o n�mero � par ou impar e retorna o resultado na tela.
		if (numero % 2 == 0){
		printf ("\n O n�mero � PAR! n�o � impar.");
	} else {
		printf ("\n O n�mero � IMPAR! n�o � par.");
	}

	//estrutura condicional composta que verifica se o n�mero � maior, menor ou igual a 10 e imprime oo resultado na tela.
	if (numero < 10){
		printf ("\n O n�mero %d � menor que 10.", numero);
	} else if (numero > 10){
		printf ("\n O n�mero %d � maior que 10.", numero);
	} else {
		printf ("\n O n�mero � igual a 10.");
	}

	//la�o do tipo for usado para multiplicar o n�mero por 2 e retornar a tela.
	
	for (i = numero; i <= numero; i++){
		i *=2;
		printf ("\n O dobro de %d � %d.", numero, i);
	}
	
	//estrutura condional composta que verifica se o n�mero � primo de 0 a 100 e retorna na tela.		
	if ((numero == 2) || ( numero == 3) || (numero == 5) || ( numero == 7) || ( numero == 11) || ( numero == 13) ||
	( numero == 17) || ( numero == 19) || ( numero == 23) || ( numero == 29) || ( numero == 31) || ( numero == 37) ||
	( numero == 41) || ( numero == 43) || ( numero == 47) || ( numero == 53) || ( numero == 59) || ( numero == 61) ||
	( numero == 67) || ( numero == 71) || ( numero == 73) || ( numero == 79) || ( numero == 83) || ( numero == 89) || ( numero == 97)){
		
		printf ("\n O %d n�mero � primo.", numero);
	} else {
		printf ("\n O n�mero %d N�O � primo.", numero);
	} 
	
	printf ("\n\n Obrigado por participar! :)\n\n");
	
	//usada para que o programa n�o se finalize automaticamente.
	system ("pause");
	
	//indica o valor de retorno da fun��o. No caso 0, indica que o programa terminou sem erros.
	return (0);
	
	
}
