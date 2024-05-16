#include <iostream>
#include <iomanip> // for setw
 
using namespace std;
 
int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
 
    int last_two_digits = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;
 
    cout << setfill('0') << setw(2) << last_two_digits << endl;
 
    return 0;
}