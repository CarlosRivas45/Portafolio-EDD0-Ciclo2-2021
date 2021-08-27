#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    //variables
    float a, b, c, s, area;
    
    cout<<"Escriba la medida del lado a "<<endl;
    cin>>a;
    cout<<"Escriba la medida del lado b "<<endl;
    cin>>b;     
    cout<<"Escriba la medida del lado c "<<endl;
    cin>>c;
    
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

if(a==b && b==c){            
   cout << "Es un triangulo Equilatero\n";
   cout<<"\nArea = "<<area;

}else if(a==b || a==c || b==c){

   cout << "Es un triangulo Isosceles\n";
   cout<<"\nArea = "<<area;

}else{                               
   cout << "Es un triangulo Escaleno";
   cout<<"Area = "<<area;
}
}

