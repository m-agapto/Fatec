#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> lista;
    int n;

    do{
  
        cout << "digite um numero diferende de 0:" << endl;
        cin >> n;
        if (n != 0 ){
            lista.push_back(n);
        }
    }while(n != 0);

    for (int j=0; j < lista.size(); j++){
        cout << lista[j] << "/n" <<endl;
    }

    return 0;
}