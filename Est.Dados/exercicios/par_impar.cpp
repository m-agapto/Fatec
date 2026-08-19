# include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "digete um numero" << endl;
	cin >> n;
	
	if (n != 0){
		if (n % 2 == 0){
			cout << "numero par" << endl;
		}
		else {
			cout << "numero impar" << endl;
		}
	}
	else {
		cout << "numero e 0" << endl;
	}
	
	return 0;
}
