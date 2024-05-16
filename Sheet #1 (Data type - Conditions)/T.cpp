#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, c, A, B, C;
    cin >> a >> b >> c;
 
    if (a >= b && a >= c) {
        A = a;
        if (b >= c) {
            B = b;
            C = c;
        } else {
            B = c;
            C = b;
        }
    } else if (b >= a && b >= c) {
        A = b;
        if (a >= c) {
            B = a;
            C = c;
        } else {
            B = c;
            C = a;
        }
    } else {
        A = c;
        if (a >= b) {
            B = a;
            C = b;
        } else {
            B = b;
            C = a;
        }
    }
    cout << C << endl << B << endl << A << endl;
    cout << endl;
    cout << a << endl << b << endl << c << endl;
 
 
    return 0;
}