#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort (a, a+n);

    for (int i = 0; i < q; i++) {
        int find;
        cin >> find;

        int low = 0;
        int high = n-1;

        int flage = 0;

        while (low <= high)
        {
            int mid = (low+high)/2;

            int guess = a[mid];

            if (guess == find) {
                cout << "found" << endl;
                flage = 1;
                break;
            }
            if (guess > find) {
                high = mid-1;
            } else if (guess < find) {
                low = mid+1;
            }
        }
        if (flage != 1) {
            cout << "not found" << endl;
        }
    }

    return 0;
}