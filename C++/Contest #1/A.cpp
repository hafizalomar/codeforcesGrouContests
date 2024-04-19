#include<iostream>
#include<iomanip>
 
using namespace std;
 
int main()
{
    int x, p;
 
    cin >> x >> p;
 
    cout << fixed;
    cout.precision(2);
 
    double originalRate = ((double)p*100)/(100-x);
 
    cout << originalRate << endl;
 
    return 0;
}