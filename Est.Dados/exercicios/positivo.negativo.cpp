#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "Digite um numero:";
		cin >> num;
	
	if (num != 0){
		if (num >=1){
			cout << "o numero e positivo";
		}
		else{
			cout << "o numero e negativo";
		}
	}
	else{
		cout << "o numero e 0";
	}
	
	return 0;
}
