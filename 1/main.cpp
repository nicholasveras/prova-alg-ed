#include <iostream>

using namespace std;

int main (){
    int valor,contador, multi;

    cout << "\n\n     TABUADA      \n\n";
    cout << "Qual número vc quer ver a tabuada?  \n\n";
    cin >> valor;

    for (contador = 1; contador <=10; contador ++){
        multi = contador * valor;

            cout << contador << " * " << valor << " = " << multi << "\n";
    }

    return 0;
}