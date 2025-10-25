
#include <iostream>
using namespace std;

int main() {
    double kilometros, millas;
    double CONVERSION = 0.621;

    
    cout << "Ingrese la cantidad de kilómetros recorridos: ";
    cin >> kilometros;

    
    millas = kilometros * CONVERSION;

    
    cout << kilometros << " kilómetros equivalen a " << millas << " millas." << endl;

    return 0;
}
