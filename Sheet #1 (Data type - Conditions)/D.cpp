#include<iostream>
 
using namespace std;
 
int main()
{
    int a, b, c, d;
 
    cin >> a >> b >> c >> d;
 
    long long difference = ((long long)a*b)-((long long)c*d);
 
    cout << "Difference = " << difference << endl;
 
    return 0;
}