#include <iostream>
#include <locale>
using namespace std;
/*
1) Fazer um programa para calcular o valor das parcelas de uma compra. Deverão ser fornecidos os seguintes dados: ENTRADAS: - Nome do cliente - Ano atual - Ano do nascimento - Valor da compra 
CÁLCULOS: Calcular a idade do cliente: Idade = ano atual – ano do nascimento 
Para calcular as parcelas, use as seguintes regras: 
- Se o valor da compra for maior ou igual a R$ 1000,00, dividir em 12 vezes. 
- Se o valor da compra for menor que R$ 1000,00 e maior ou igual a R$ 500,00, dividir em 9 vezes. 
- Se o valor da compra for menor que R$ 500,00 e maior ou igual a R$ 200,00, dividir em 6 vezes. 
- Se o valor da compra for menor que R$ 200,00 e maior ou igual a R$ 50,00, dividir em 3 vezes.
- Se o valor da compra for menor que R$ 50,00, não dividir em parcelas. 
- Se a idade do cliente for maior ou igual a 70 anos, dividir a compra somente em 3 vezes independentemente do valor da compra. 
SAÍDAS: Após o cálculo da parcela, mostrar em uma mensagem o nome do cliente, idade do cliente, valor da compra, 
quantidade de parcelas e valor da parcela. 
Nome do programa: CalcularParcelas
*/

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	int ano_atual = 0, ano_nascimento = 0, valor_compra = 0, idade = 0, parcelas = 0;
	
	cout << "+==========================+ \n";
	cout << "|   Cálculo de Parcelas    | \n";
	cout << "+==========================+ \n";
	
	cout << "Insira o seu nome: " << endl;
	cin >> nome;
	
	cout << "Insira o Ano Atual: " << endl;
	cin >> ano_atual;
	
	cout << "Insira o ano do seu nascimento: " << endl;
	cin >> ano_nascimento;
	
	idade = ano_atual - ano_nascimento;
	
	cout << "Insira o valor da compra em R$: " << endl;
	cin >> valor_compra;
	
	
	if(idade >=70){
		parcelas = 3;
	}else {
		if(valor_compra >= 1000) {
			parcelas = 12;	
		}else if (valor_compra >= 500) {
			parcelas = 9;
		}else if (valor_compra >= 200) {
			parcelas = 6;
		}else if (valor_compra >= 50) {
			parcelas = 3;
		}else{
			parcelas = 1;
		}
	}
	
	cout << "=========================" << endl;
	cout << "Nome:    " << nome << endl;
	cout << "Idade: " << idade <<  endl;
	cout << "Valor da Compra: R$ " << valor_compra << endl;
	cout << "=========================" << endl;
	
	cout << "Quantidade de parcelas: " << parcelas << " vezes" << endl;
	cout << "Valor das parcelas: R$ " << valor_compra/parcelas;
	
	
	return 0;
}
