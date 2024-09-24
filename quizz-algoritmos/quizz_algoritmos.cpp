#include <iostream>

#include <locale>

using namespace std;

/* Quizz com 5 perguntas e 3 Alternativas */
/*Mostrar se acertou ou errou logo após a pergunta*/

int main() {
	
	
	setlocale(LC_ALL, "Portuguese");
	
	
	cout << "QUIZZ SOBRE ALGORITMOS DE PROGRAMAÇÃO" << endl;
	
	char resp1, resp2, resp3, resp4, resp5; 
	int pontos = 0;
	
	
	cout << "Qual é o propósito principal de um algoritmo? " << endl << "A) Armazenar dados" << endl << "B) Resolver um problema" << endl << "C) Fazer um gráfico" << endl;
	cin >> resp1;
	
	if (resp1 == 'b') {
		cout << "Alternativa correta!" << endl << "=======================================" << endl;
		pontos++;
		
		
	} else {
		cout << "Alternativa Incorreta" << endl  << "=======================================" << endl;
	}	
	
	cout << "Qual tipo de variável geralmente ocupa menos espaço na memória?" << endl << "A) char" << endl << "B) string" << endl << "C) float" << endl;
	cin >> resp2;
	
	if (resp2 == 'a') {
		cout << "Alternativa correta!" << endl << "=======================================" << endl;
		pontos++;
		
	} else {
		cout << "Alternativa Incorreta" << endl << "=======================================" << endl;
	}
	
	cout << "Qual é a principal função de uma variável booleana?" << endl << "A) Armazenar um número" << endl << "B) Armazenar uma condição" << endl << "C) Armazenar: true ou false" << endl;
	cin >> resp3;
	
	if (resp3 == 'c') {
		cout << "Alternativa correta!" << endl << "=======================================" << endl;
		pontos++;
	} else {
		cout << "Alternativa Incorreta" << endl << "=======================================" << endl;
	}
	
	cout << "Qual dos seguintes tipos de variáveis é mais adequado para armazenar um caractere?" << endl << "A) double" << endl << "B) char" << endl << "C) int" << endl;
	cin >> resp4;
	
	if (resp4 == 'b') {
		cout << "Alternativa correta!" << endl << "=======================================" << endl;
		pontos++;
	} else {
		cout << "Alternativa Incorreta" << endl << "=======================================" << endl;
	}
	
	cout << "Qual é a principal função de uma variável em um programa?" << endl << "A) Armazenar dados temporários que podem ser utilizados e manipulados durante a execução do programa" << endl << "B) Definir a quantidade máxima de memória RAM disponível no sistema" << endl << "C) Gerar automaticamente código-fonte a partir de uma linguagem de programação para outra" << endl;
	cin >> resp5;
	
		if (resp5 == 'a') {
		cout << "Alternativa correta!" << endl << "=======================================" << endl;
		pontos++;
	} else {
		cout << "Alternativa Incorreta" << endl << "=======================================" << endl;
	}
	
	cout << "Você acertou " << pontos << " de 5 questões!" << endl << "=======================================" << endl;
	
	cout << "Voce acertou "(pontos*100)/5 << "%" << " das questões !";
	
	

	
	return 0;
	
	
	

}
