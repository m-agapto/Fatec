# include <iostream>
using namespace std;

int main()
{
	int dias;
	string sem[7] = {"domingo","segunda","terça","quarta","quinta","sexta","sabado"};
	
	cout << "digite um numero:";
	cin >> dias;

	if (dias <=7){
	cout << " dia da semana: " << sem[dias-1] << endl;
}
else {
	cout << "numero invalido" << endl;
}
	return 0;
	
}
