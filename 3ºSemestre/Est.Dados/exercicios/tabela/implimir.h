#include <iostream>
#include "variavel.h"
using namespace std;

	void imp(char produto[][20], int cod[],int val[],int est[],int i){
		for (int j=0;j<i;j++){
		cout << "produto:" << produto[j] << "codigo:" << cod[j] << "valor:" << val[j] << "estoque:" << est[j] << endl;
		}
	}
