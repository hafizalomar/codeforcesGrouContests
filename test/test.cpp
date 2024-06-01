#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i ++) {
        string s;
        cin >> s;

        int first_sum = 0;

        for (int i = 0; i < 3; i++) {
            first_sum += int(s[i])-48;
        }
        int endindex = size(s);
        endindex--;
        int condition = endindex-2;

        int second_sum = 0;

        for (int i = endindex; i >= condition; i--) {
            second_sum += int(s[i])-48;
        }

        if (first_sum == second_sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}