#include <iostream>
#include <locale>
using namespace std;

/*
3) Uma empresa de vendas tem tr�s corretores. A empresa paga ao corretor uma comiss�o calculada de acordo com o valor de suas vendas. 
Se o valor da venda de um corretor for maior que R$ 50.000.00 a comiss�o ser� de 12% do valor vendido. 
Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo extremos) a comiss�o ser� de 9.5%. Em qualquer outro caso, a comiss�o ser� de 7%. 
Escreva um algoritmo que mostre o nome, valor da venda e comiss�o de cada corretor. 
A sa�da deve mostrar tamb�m o total de vendas da empresa.
*/

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float vend_claudio = 0, vend_carla = 0, vend_roberto = 0, comissao_claudio = 0, comissao_carla = 0, comissao_roberto = 0;
	
	cout << "+======================+ \n";
	cout << "| C�lculo de Comiss�es | \n";
	cout << "+======================+ \n";
	
	cout << "Valor de Vendas Corretor Cl�udio: R$" << endl;
	cin >> vend_claudio;
	
	if(vend_claudio > 50000) {
		comissao_claudio = 0.12;
	}else if (vend_claudio >= 30000 && vend_claudio <= 50000){
		comissao_claudio = .095;
	}else{
		comissao_claudio = 0.7;
	}
	
	
	cout << "Valor de vendas Corretora Carla: R$" << endl;
	cin >> vend_carla;
	
	if(vend_carla > 50000) {
		comissao_carla = 0.12;
	}else if (vend_carla >= 30000 && vend_carla <= 50000){
		comissao_carla = .095;
	}else{
		comissao_carla = 0.7;
	}
	
	cout << "Valor de vendas Corretor Roberto: R$" << endl;
	cin >> vend_roberto;
	
	if(vend_roberto > 50000) {
		comissao_roberto = 0.12;
	}else if (vend_roberto >= 30000 && vend_roberto <= 50000){
		comissao_roberto = .095;
	}else{
		comissao_roberto = 0.7;
	}
	
	
	cout << "Comiss�o do Corretor Cl�udio R$" << vend_claudio * comissao_claudio << endl;
	cout << "Comiss�o do Corretor Carla R$" << vend_carla * comissao_carla << endl;
	cout << "Comiss�o do Corretor Roberto R$" << vend_roberto * comissao_roberto << endl;
	
	
	return 0;
}
