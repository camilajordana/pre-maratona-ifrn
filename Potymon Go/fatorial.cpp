#include <iostream>
using namespace std;

int main(){
	unsigned int n = 0, resto = 0;
	int soma = 0;
	cin >> n;
	resto = n;
	while(resto != 0){
		if(resto >= 362880){
			soma++;
			resto = resto - 362880;
		} else if(resto >= 40320){
			soma++;
			resto = resto - 40320;
		} else if(resto >= 5040){
			soma++;
			resto = resto - 5040;
		} else if(resto >= 720){
			soma++;
			resto = resto - 720;
		} else if(resto >= 120){
			soma++;
			resto = resto - 120;
		} else if(resto >= 24){
			soma++;
			resto = resto - 24;
		} else if(resto >= 6){
			soma++;
			resto = resto - 6;
		} else if(resto >= 2){
			resto = resto - 2;
			soma++;
		} else if(resto >= 1){
			resto = resto - 1;
			soma++;
		}
	}
	cout << soma << "" << endl;
	return 0;
}
