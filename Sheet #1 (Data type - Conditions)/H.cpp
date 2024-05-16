#include<iostream>
#include<cmath>
#include<iomanip>
 
using namespace std;
 
int main()
{
    int a, b, floor, ceil, round;
 
    cin >> a >> b;
 
    float temp = ((float)a / b) - a/b;
 
    floor = a / b;
    if (temp == 0) {
        ceil = a / b;
    } else {
        ceil = a / b + 1;
    }
    if (temp >= 0.5) {
        round = ceil;
    } else {
        round = floor;
    }
 
    cout << "floor " << a << " / " << b << " = " << floor << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil << endl;
    cout << "round " << a << " / " << b << " = " << round << endl;
 
    return 0;
}