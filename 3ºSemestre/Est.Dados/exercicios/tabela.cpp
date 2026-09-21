#include <iostream>
#include <vector>
using namespace std;

int imp(string dados[], string tab[][3]) 
{
    for(int i=0;i<4;i++){
			cout << dados[i] << "	";
		for(int j=0;j<3;j++){
				cout << tab[i][j];
			}
		}	
}

void dcod(string dados[], string tab[][3])
{
    string codigo;
    cout << "digite o codigo a ser pesquisado" << endl;
    cin >> codigo;

    for (int i = 0; i < 3; i++) {
        if (tab[0][i] == codigo){
            cout << "codigo encontrado" << codigo << endl;
            cout << "produto:" << tab[1][i] << endl;
            cout << "valor:" << tab[2][i] << endl;
            cout << "quantidade em estoque:" << tab[3][i] << endl;
        }
        else {
            cout << "codigo nao encontrado" << endl;
        }
    }
}

void compra(string dados[], string tab[][3])
{
    int j=0;
    string qcomp, codigo[3];
    bool repit = 1;
    while (repit == 1 || j == 3) {
        j++;
    cout << "digite o codigo do produto a ser comprado" << endl;
    cin >> codigo[j];
    for (int i = 0; i < 3; i++) {
        if (codigo[j] == tab[0][i]){
            cout << "produto a ser comprado" << tab[1][i] << endl;
            cout << "quantidade em estoque:" << tab[3][i] << endl;
            cout << "quantidade da compra" << endl;
            cin >> qcomp;

                if (qcomp <= tab[3][i]) {
                    tab[3][i] = to_string(stoi(tab[3][i]) - stoi(qcomp));
                    cout << "compra realizada com sucesso" << endl;
                }
            }else{
                cout << "quantidade em estoque insuficiente" << endl;
            }
            cout << "deseja realizar outra compra? (1/0)" << endl;
            cin >> repit;
        }
    } 
}

int main()
{
	string dados [4] = {"codigo","produto","valor do","quantidade em estoque"};
	string tab[4][3];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cout << "digite o " << j+1 << " " << dados[i] << "do produto" << endl;
			cin >> tab[i][j];
		}
	}	
	imp(dados, tab);
    dcod(dados, tab);
    compra(dados, tab);

   return 0;
}
