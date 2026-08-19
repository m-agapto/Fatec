# include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "digite um numero:";
	cin >> n;
	
	if (n != 0){
		if (n >= 1){
			cout << "numero e positivo";
		}
		else {
			cout << "numero e negatico";
		}
	}
	else{
		cout << "numero e 0";
	}
	
	return 0;
}
