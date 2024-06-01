#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n/2; i++) {
        if (a[i] == a[n-i-1]) {
            count++;
        }
    }

    if (count == n/2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}