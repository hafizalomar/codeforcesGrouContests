#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;



int main()
{
    int n;
    cin >> n;
    char s[n+1];
    cin >> s;

    int a[26] = {0};

    for (char c:s) {
        a[int(c-97)]++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < a[i]; j++) {
            cout << char(i+97);
        }
    }

    return 0;
    
}