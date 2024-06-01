#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int max_value, min_value, a, b, c;
    cin >> a >> b >> c;

    max_value = max({a, b, c});
    min_value = min({a, b, c});

    cout << min_value << " " << max_value;
    return 0;
}