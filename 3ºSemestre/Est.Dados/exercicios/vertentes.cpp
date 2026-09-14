#include <iostream>;
using namespace std;

int main()
{
	int id;
	cout << "qual a sua idade: ";
	cin >> id;
	
	if (id < 18){
		cout << "voce e menor de idade  " << endl;
	}else{
		cout << "Voce e maior de idade " << endl;
	}
	
	return 0;
}
