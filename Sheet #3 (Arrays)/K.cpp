#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n+1];

    cin >> a;

    long long int res = 0;

    for (int i = 0; i < n; i++) {
        res += int(a[i]-48);
    }

    cout << res << endl;

    return 0;
}