// write a c ++ program for get input from user and show output from user given input
// here one problem if u enter the address with space and , in output not showing clearly the given address details perfect
// other way if enter address details with underscore it's showing perfectly

using namespace std;
#include <iostream>
int main ()

{
    char x[50];
    cout << "Enter the Name: ";
    cin >> x;

    char y[10000];
    cout << "Enter the Address: ";
    cin >> y;

    cout << "\n" << "-----Name-----" << "\n" << x << "\n" << "-----Address-----" << "\n" << y;
}