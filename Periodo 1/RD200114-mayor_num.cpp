#include <iostream> 

using namespace std;
int main() 
{ 
int a[5], mayor; 
cout << "Escriba 5 numeros\n"; 
for (int i = 0; i<5; i++) 
{ 
cin >> a[i]; 
} 
mayor = a[0]; 
for (int i = 0; i < 5; i++) 
{ 
if (a[i] > mayor) 
{ 
mayor = a[i];
} 
} 
cout << "\nEl numero mayor es: " << mayor<<endl;
return 0; 
}

