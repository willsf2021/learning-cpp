#include <iostream>

#include <locale>

using namespace std;

/* Quizz com 5 perguntas e 3 Alternativas */
/*Mostrar se acertou ou errou logo ap�s a pergunta*/

int main() {
	
	
	setlocale(LC_ALL, "Portuguese");
	
	
	cout << "QUIZZ SOBRE ALGORITMOS DE PROGRAMA��O" << endl;
	
	char resp1, resp2, resp3, resp4, resp5; 
	int pontos = 0;
	
	
	cout << "Qual � o prop�sito principal de um algoritmo? " << endl << "A) Armazenar dados" << endl << "B) Resolver um problema" << endl << "C) Fazer um gr�fico" << endl;
	cin >> resp1;
	
	if (resp1 == 'b') {
		cout << "Alternativa correta!" << endl << "=======================================" << endl;
		pontos++;
		
		
	} else {
		cout << "Alternativa Incorreta" << endl  << "=======================================" << endl;
	}	
	
	cout << "Qual tipo de vari�vel geralmente ocupa menos espa�o na mem�ria?" << endl << "A) char" << endl << "B) string" << endl << "C) float" << endl;
	cin >> resp2;
	
	if (resp2 == 'a') {
		cout << "Alternativa correta!" << endl << "=======================================" << endl;
		pontos++;
		
	} else {
		cout << "Alternativa Incorreta" << endl << "=======================================" << endl;
	}
	
	cout << "Qual � a principal fun��o de uma vari�vel booleana?" << endl << "A) Armazenar um n�mero" << endl << "B) Armazenar uma condi��o" << endl << "C) Armazenar: true ou false" << endl;
	cin >> resp3;
	
	if (resp3 == 'c') {
		cout << "Alternativa correta!" << endl << "=======================================" << endl;
		pontos++;
	} else {
		cout << "Alternativa Incorreta" << endl << "=======================================" << endl;
	}
	
	cout << "Qual dos seguintes tipos de vari�veis � mais adequado para armazenar um caractere?" << endl << "A) double" << endl << "B) char" << endl << "C) int" << endl;
	cin >> resp4;
	
	if (resp4 == 'b') {
		cout << "Alternativa correta!" << endl << "=======================================" << endl;
		pontos++;
	} else {
		cout << "Alternativa Incorreta" << endl << "=======================================" << endl;
	}
	
	cout << "Qual � a principal fun��o de uma vari�vel em um programa?" << endl << "A) Armazenar dados tempor�rios que podem ser utilizados e manipulados durante a execu��o do programa" << endl << "B) Definir a quantidade m�xima de mem�ria RAM dispon�vel no sistema" << endl << "C) Gerar automaticamente c�digo-fonte a partir de uma linguagem de programa��o para outra" << endl;
	cin >> resp5;
	
		if (resp5 == 'a') {
		cout << "Alternativa correta!" << endl << "=======================================" << endl;
		pontos++;
	} else {
		cout << "Alternativa Incorreta" << endl << "=======================================" << endl;
	}
	
	cout << "Voc� acertou " << pontos << " de 5 quest�es!" << endl << "=======================================" << endl;
	
	cout << "Voce acertou "(pontos*100)/5 << "%" << " das quest�es !";
	
	

	
	return 0;
	
	
	

}
