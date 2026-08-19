# include <iostream>
using namespace std;

int main()
{
	int nota;
	
	cout <<	"digite sua nota";
	cin >> nota;
	
	string estado = (nota > 6) ? "Aprovado" : "Reprovado"; 
	
	cout << "vode foi " << estado << endl;
	
	return 0;	
}
