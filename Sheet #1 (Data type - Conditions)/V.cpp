#include <iostream>
#include <iomanip>
 
/*
    cout << setfill('0') << setw(2) << last_two_digits << endl;
*/
 
using namespace std;
 
int main() {
 
    int a, b;
    char c;
 
    cin >> a >> c >> b;
 
    if (c == '>') {
        if (a > b) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else if (c == '<') {
        if (a < b) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else {
        if (a == b) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    }
 
    return 0;
}