#include<bits/stdc++.h>

using namespace std;

void fun(int n, char c) {
    if (n == 0) return;
    fun(n-1, c);
    cout << c << " ";
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        char c;

        cin >> n >> c;

        fun(n, c);
        cout << endl;
    }

    return 0;
}