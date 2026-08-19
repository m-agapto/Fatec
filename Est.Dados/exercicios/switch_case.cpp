#include <iostream>
using namespace std;

int main()
{
	int m;
	cout << "digite um numero entre 1 e 9:" <<endl;
	cin >> m;
	
	switch (m)
	{
		case 1:
			cout << "visão computacional" << endl;
			break;
		
		case 2:
			cout << "redes neurais " << endl;
			break;
	
		case 3:
			cout << "eng.software" << endl;
			break;
		
		case 4:
			cout << "front end" << endl;
			break;
		
		case 5:
			cout << " back end" << endl;
			break;
		
		case 6:
			cout << "banco de dados" << endl;
			break;
		
		case 7:
			cout << "qualidade de software" << endl;
			break;
		
		case 8:
			cout << "i.A" << endl;
			break;
		
		case 9:
			cout << "Realiadade aumentada" << endl;
			break;		
	
	default:
		cout << "numero invalido" << endl;
		break;
	}
	return 0;	
}
