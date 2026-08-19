#include <iostream>
using namespace std;

int main()
{
	int ops,adj,hipo;
	
	cout << "digite a hipotenusa" << endl;
	cin >> hipo;
	cout << "digite o cateto adjacente" <<endl;
	cin >> adj;
	cout << "digite o cateto oposto" << endl;
	cin >> ops;
	
	if (ops == adj && ops == hipo){
		cout << "triangilo equilatero" << endl;
	}
	if (adj != hipo && ops == hipo){
		cout << "triangulo isoceles" <<endl;
	}
	if (adj != hipo && hipo != ops && adj != ops){
		cout << "escaleno" << endl;	
	}
	return 0;
}
