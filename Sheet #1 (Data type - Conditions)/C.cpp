#include<iostream>
 
using namespace std;
 
int main()
{
    int numberOne, numberTwo;
 
    cin >> numberOne >> numberTwo;
 
    int summation = numberOne + numberTwo;
 
    long long multiplication = (long long)numberOne * numberTwo;
 
    int subtraction = numberOne - numberTwo;
 
    cout << numberOne << " + " << numberTwo << " = " << summation << endl;
    cout << numberOne << " * " << numberTwo << " = " << multiplication << endl;
    cout << numberOne << " - " << numberTwo << " = " << subtraction << endl;
 
    return 0;
}