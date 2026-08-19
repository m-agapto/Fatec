# include <iostream>
using namespace std;

int main()
{
	int dia;
	
	cout << "digite um numero entre (1 e 7):";
	cin >> dia;
	
	switch (dia)
	{
		case 1:
		{
			cout << "domingo" << endl;
			break;
		}
		case 2:
		{
			cout << "segunda" << endl;
			break;
		}
		case 3:
		{
			cout << "terça" << endl;
			break;
		}
		case 4:
		{
			cout << "quarta" << endl;
			break;
		}
		case 5:
		{
			cout << "quinta" << endl;
			break;
		}
		case 6:
		{
			cout << "sexta" << endl;
			break;
		}
		case 7:
		{
			cout << "sabado" << endl;
			break;
		}
	default:
		cout << "numero de dia invalido" << endl;
	}
	
	return 0;
}
