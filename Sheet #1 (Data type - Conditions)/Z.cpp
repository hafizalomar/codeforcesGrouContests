#include <iostream>
#include <iomanip>
#include <cmath>
 
/*
    cout << setfill('0') << setw(2) << last_two_digits << endl;
*/
 
using namespace std;
 
int main() {
 
    long long int a, b, c, d;
 
    cin >> a >> b >> c >> d;
 
    if (b*log(a)> d*log(c)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}