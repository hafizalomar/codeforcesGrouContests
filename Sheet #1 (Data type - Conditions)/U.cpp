#include<iostream>
 
using namespace std;
 
int main()
{
    double n;
    cin >> n;
 
    int res = n / 1;
    n = n - res;
 
    if (n > 0) {
        cout << "float " << res << " " << n << endl;
    } else {
        cout << "int " << res << endl;
    }
 
 
    return 0;
}