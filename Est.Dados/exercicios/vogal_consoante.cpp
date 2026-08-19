# include <iostream>
using namespace std;

int main()
{
	string vog [5] = {"a","e","i","o","u"};	
	string letra;
	
	cout << "digite uma letra" << endl;
	cin >> letra;
	
	for (int i=0;i<5;i++){
		if (letra == vog[i]){
			cout << letra << "e uma vogal" <<endl;
			break;
		}
		else {
			cout << letra << " e uma consoante" << endl;
			break;
		}
	}
	return 0;
}

