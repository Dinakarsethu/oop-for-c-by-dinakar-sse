//write a c++ program find the biggest number

using namespace std;
#include <iostream>
int main()

{
    int x,y;
    
    cout << "-----Biggest number-----";
    cout << "\n" << "Enter the First Value: ";
    cin >> x;

    cout << "Enter the Second Value: ";
    cin >> y;

    if (x > y)
    {
        cout << " -----X is Bigger than y-----";
    }
    else
    {
        cout << "-----Y is Bigger than x, X is lesser than y-----";
    }
}