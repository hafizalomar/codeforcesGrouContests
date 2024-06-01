#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        if (n%2 != 0) {
            cout << "-1" << endl;
            return 0;
        }

        int odd_count = 0;
        int even_count = 0;

        for (int j = 0; j < n; j++) {
            int cmp;
            cin >> cmp;
            if (cmp%2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }

        if (even_count == odd_count) {
            cout << "0" << endl;
        } else if (even_count > odd_count) {
            int res = even_count - odd_count;
            if (res == even_count) {
                cout << res/2 << endl;
            } else {
                cout << res 
            }
        } else {
            int res = odd_count - even_count;
            if (res == odd_count) {
                cout << res/2 << endl;
            }
        }
    }
}