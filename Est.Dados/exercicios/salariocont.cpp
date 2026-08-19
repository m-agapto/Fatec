# include <iostream>
using namespace std;

int main(){
	
	int salb,sall;
	double taxa;
	cout << "digite o salario anual: " << endl;
	cin >> salb;
	
	if (salb <= 20000){
		cout << "isento de taxa" << endl;
		taxa = 0;
		sall = salb;
	}
	else if (salb <=50000){
		taxa = 0.10;
		sall = salb -(salb * taxa);
	}
	else{
		taxa = 0.20;
		sall = salb -(salb * taxa);
	}
	
	cout << "valor bruto" << salb << endl;
	cout <<  "valor liquido:" << sall << " \ntaxa: " << taxa * 100 << "%" << endl;
	
	return 0;
}
