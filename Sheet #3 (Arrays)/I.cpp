#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int index_i = 0;
        int index_j = 1;

        long long int cmp = 9999999999;
        for (int i = 0; i < n-1; i++) {
            for (int j = 1+i; j < n; j++) {
                if (a[i]+a[j] <= cmp) {
                    cmp = a[i]+a[j];
                    index_i = i;
                    index_j = j;
                }    
            }
        }

        long long int res = (long long int)(a[index_i]+a[index_j])+(index_j+1)-(index_i+1);

        cout << res << endl;

    }

    return 0;
}