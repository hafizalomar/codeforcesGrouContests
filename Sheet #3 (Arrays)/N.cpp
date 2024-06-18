#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int check_a = 0;
    int check_b = 0;

    string s;
    cin.ignore();
    getline(cin, s);

    bool split = true;

    for (char c : s) {
        if (split) {
            if (c >= '0' && c <= '9') {
                check_a++;
            } else if (c == '-') {
                split = false;
            }
        }
        if (!split) {
            if (c >= '0' && c <= '9') {
                check_b++;
            }
        }
    }

    if (a == check_a && b == check_b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}