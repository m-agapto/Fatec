# include <iostream>

using namespace std;



int main(){



    float raio, altura;

    float raioL,raioT,raioB;

    float PI=3.14159;

    cout << "digite o raio da circuferencia" << endl;

    cin >> raio;

    cout << "digete a altura do cilindro" << endl;

    cin >> altura;

   

    raioL = (2*PI)* raio * altura;

    raioB = PI * raio * raio;

    raioT = raioL + (2*raioB);



    cout << "\nraio da lateral: " << raioL << endl;

    cout << "raio total: " << raioT << endl;

   

    return 0;

}