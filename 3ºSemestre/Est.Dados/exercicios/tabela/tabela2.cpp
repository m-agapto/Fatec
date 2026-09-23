#include <iostream>
#include <string>
#include "variavel.h"	
#include "implimir.h"

using namespace std;

void pesq(char produto[][20], int cod[],int val[],int est[],int i){
	int codigo,repit;
	cout << "digite o codico do produdo" << endl;
	cin >> codico;
	do{
	for (int j=0;j<i;j++){
		if (codigo == cod[j]){
			repit =0;
			cout << "codigo encontrado" << endl;
			cout << "produto:" << produto[j] << "valor:" << val[j] << "estoque:" << vest[j] << endl; 
		}else{
			cout << "codigo inixistente" << endl;
			repit=1;
		}
	}
}while(repit==1);
		
}


int main()
{
	
	char produto[100][20];	
	int cod[100],val[100],est[100];

	int i=0;
	int repit = 1;
	do
	{
		cout << "digite o produto" << endl;
		cin >> produto[i];
		cout << "digite o codigo" << endl;
		cin >> cod[i];
		cout << "digite o valor" << endl;
		cin >> val[i];
		cout << "digite a quantidade em estoque" << endl;
		cin >> est[i];
		
		i++;
		do{
			cout << "deseja adicionar outro produto?" << endl;
			cin >> repit;
		}while(repit != 0 && repit != 1);
		
	}while(repit==1);
	
	imp(produto,cod,val,est,i);
	
	return 0;
}


