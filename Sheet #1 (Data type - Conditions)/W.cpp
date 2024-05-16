#include <iostream>
#include <iomanip>
 
/*
    cout << setfill('0') << setw(2) << last_two_digits << endl;
*/
 
using namespace std;
 
int main() {
 
    int a, b, c, res;
    char opt, eql;
 
    cin >> a >> opt >> b >> eql >> c;
 
    switch (opt) {
        case ('+'):
            res = a + b;
            break;
        case ('-'):
            break;
        case ('*'):
            res = a * b;
            break;
    }
 
    if (res == c) {
        cout << "Yes" << endl;
    } else {
        cout << res << endl;
    }
 
    return 0;
}