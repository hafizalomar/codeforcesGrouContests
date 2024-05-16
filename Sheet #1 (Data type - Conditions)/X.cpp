#include <iostream>
#include <iomanip>
 
/*
    cout << setfill('0') << setw(2) << last_two_digits << endl;
*/
 
using namespace std;
 
int main() {
 
    int L1, L2, R1, R2;
 
    cin >> L1 >> R1 >> L2 >> R2;
 
    if (R1 < L2 || R2 < L1) {
        cout << "-1" << endl;
    } else if (L2 <= L1 && R1 <= R2) {
        cout << L1 << " " << R1 << endl;
    } else if (L2 <= L1 && R2 <= R1) {
        cout << L1 << " " << R2 << endl;
    } else if (L1 <= L2 && R1 <= R2) {
        cout << L2 << " " << R1 << endl;
    } else {
        cout << L2 << " " << R2 << endl;
    }
 
    return 0;
}
