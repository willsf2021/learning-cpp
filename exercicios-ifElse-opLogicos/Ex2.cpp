#include <iostream>
#include <locale>
using namespace std;
/*
2) Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela e calcule a multa a ser paga, sabendo que são cobrados: 
a) 50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade permitida (ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h); 
b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida. 
c) 200 reais, se estiver acima de 31km/h da velocidade permitida.
 
*/

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float vel_maxima_perm = 0, vel_aferida = 0, multa = 0, dif = 0;
	
	cout << "+===========================+ \n";
	cout << "| Verificador de Velocidade | \n";
	cout << "+===========================+ \n";
	
	cout << "Insira a Velocidade Máxima Permitida da Via: " << endl;
	cin >> vel_maxima_perm;
	
	cout << "Insira a Velocidade Aferida: " << endl;
	cin >> vel_aferida;
	
	dif =  vel_aferida - vel_maxima_perm;
	
	if(dif <= 0){
		cout << "+=============================================================+" << endl;
		cout << "| Você estava dentro do limite de Velocidade Máxima Permitida |" << endl;
		cout << "+=============================================================+" << endl;
		
		cout << "Velocidade Máxima Permitida: " << vel_maxima_perm << "km/h" << endl;
		cout << "Velocidade Aferida: " << vel_aferida << "km/h" << endl;
	}else{
		if( dif <= 10 ){
			multa = 50;
		}else if(dif > 10 && dif <= 30) {
			multa = 100;
		}else if(dif > 30){
			multa = 200;
		}
		
		cout << "Você ultrapassou " << dif << "km/h da Velocidade Máxima permitida (" << vel_maxima_perm << "km/h)" << endl;
		cout << "Multa no valor de: R$ " << multa << endl;
	}
	

	
	
	return 0;
}
