#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, t;
    cin >> n >> t;

    vector<long long int> v(n);
    vector<long long int> pre(n);

    long long int pre_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        pre_sum += v[i];
        pre[i] = pre_sum;
    }

    for (int i = 0; i < t; i++) {
        long long int L, R;
        cin >> L >> R;
        L--;
        R--;

        long long int sum;

        if (L == 0) sum = pre[R];
        else sum = pre[R]-pre[L-1];

        cout << sum << endl;
    }

    cout << endl;
    return 0;
}