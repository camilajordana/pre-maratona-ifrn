#include <iostream>
using namespace std;

int main(){

	unsigned int j = 0, r = 0;
	int c = 0;
	cin >> j;
	cin >> r;
	int jogadores[j];

	for(int i = 0; i < j; i++){
		jogadores[i] = 0;
	}

	for(int i = 0; i < r; i++){
		for(int j2 = 0; j2 < j; j2++){
			cin >> c;
			jogadores[j2] += c;
		}
	}

	int indice_vencedor = 0;
	int valor_vencedor = -1;

	for(int i = j-1; i >= 0; i--){

		if(jogadores[i] > valor_vencedor){
			indice_vencedor = i;
			valor_vencedor = jogadores[i];
		}

	}

	cout << indice_vencedor+1 << "" << endl;

	return 0;
}
