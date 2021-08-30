#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[20], sum=0, prom;

    cout << "Canditad de numeros para esta operacion: ";
    cin >> n;

    while (n > 20 || n <= 0)
    {
        cout << "Error! debe introducior cantidad menor a 20." << endl;
        cout << "Escriba una cantidad: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Escriba un numero: ";
        cin >> num[i];
        sum += num[i];
    }

    prom = sum / n;
    cout << "El promedio es = " << prom;

    return 0;
}

