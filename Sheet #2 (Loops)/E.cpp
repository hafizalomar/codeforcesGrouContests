#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int t, n;

    cin >> t;

    int max_value = INT_MIN;

    for (int i = 0; i < t; i++) {
        cin >> n;
        max_value = max(max_value, n);
    }

    cout << max_value;

    return 0;
}
