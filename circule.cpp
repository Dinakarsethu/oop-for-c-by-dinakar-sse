// write a c++ program for Area of the Cirule and Cirumference of the Circule

using namespace std;
#include <iostream>
int main ()

{
    float x;
    cout << "-----Area of the cirule-----";
    cout << "\n" << "Give the radius of the circule: ";
    cin >> x;
    cout << "Area of the cirule: ";
    cout << 3.14*(x*x);
    
    cout << "\n" << "-----Cirumference of the Circule-----";
    cout << "\n" <<  "Cirumference of the Circule: ";
    cout << (2*3.14*x);
    
}