#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout <<"digite um numero:";
	cin >> num;
	
	string paridade = (num % 2 == 0) ? "par":"impar";  
	
	cout << "o numero " << num << " e " << paridade << endl;
	
	return 0;
}
