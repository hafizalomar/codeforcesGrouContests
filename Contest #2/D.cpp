#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        a--;

        unsigned long long int res = ((unsigned long long int)b*(b+1)/2) - ((unsigned long long int)a*(a+1)/2);

        cout << res << endl;
    }

    return 0;
}