#include <iostream>
#include "variavel.h"
using namespace std;
void pesq(char produto[][20], int cod[],int val[],int est[],int i){
	int codigo,qtd;
	int venda[2];
	bool encontrado = false;
	cout << "digite o codico do produdo" << endl;
	cin >> codigo;
	do{
	for (int j=0;j<i;j++){
		if (codigo == cod[j]){
			cout << "codigo encontrado" << endl;
			cout << "produto:" << produto[j] << "valor:" << val[j] << "estoque:" << est[j] << endl; 
			venda[0]=val[j];
			venda[1]=est[j];
			encontrado = true;
			break;
		}else{
			cout << "codigo inixistente" << endl;
		}
	}
	}while(encontrado == false);
	
	cout << "quantidade da compra" << endl;
	cin >> qtd;
	
	if (qtd <= venda[1]){
		venda[1] = venda[1] - qtd;
	}else{
		cout << "quandidade em estoque insuficiente" << endl;
	}
	for (int i=0;i<2;i++){
		cout << venda[i] << endl;
	}
}
