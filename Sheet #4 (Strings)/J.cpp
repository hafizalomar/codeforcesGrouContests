#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c;

    vector<int> count(26, 0);

    while (cin >> c)
    {
        count[c-'a']++;
    }
    

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("%c : %d\n",i+97 ,count[i]);
        }
    }


    return 0;
}