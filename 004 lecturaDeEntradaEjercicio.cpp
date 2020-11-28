// 004 
/*
    Escribe un programa que lea dos numeros de la entrada estandar y muestre en la salida
    su suma, resta, multiplicacion y division
*/

#include <iostream>
using namespace std;

int main(){
    float n1, n2;

    cout << "Ingrese dos valores: " << endl;

    cin >> n1;
    cin >> n2;
    
    cout << "Suma:\t" << n1 + n2 << endl;
    cout << "Resta:\t" << n1 - n2 << endl;
    cout << "Multiplicacion:\t" << n1 * n2 << endl;
    if (n2 != 0.0) cout << "Division:\t" << n1 - n2 << endl;

    return 0;
}