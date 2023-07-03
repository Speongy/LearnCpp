#include <iostream>
using namespace std;

int main()
{
    double pesos;
    double reais;
    double soles;
    double dollars;

    cout << "Enter number of Colombian Pesos: \n";
    cin >> pesos;

    cout << "Enter number of Brazilian Reais: \n";
    cin >> reais;

    cout << "Enter number of Peruvian Soles: \n";
    cin >> soles;
    // cout << pesos << endl << reais << endl << soles << endl;

    /*conversion rates
    1 peso = 0.000239 usd
    1 reais = 0.21 usd
    1 soles = 0.28 usd
    */

    double peso_conv = pesos * 0.000239;
    double reais_conv = reais * 0.21;
    double soles_conv = soles * 0.28;

    cout << reais_conv << endl;
    // dollars = peso_conv + reais_conv + soles_conv;

    // cout << "US Dollars = $" << dollars << endl;
}