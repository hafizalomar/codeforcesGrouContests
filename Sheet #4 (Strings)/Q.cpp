#include<bits/stdc++.h>

using namespace std;

string s2;

void fun(string word) {
    int end = size(word);
    for (int i = end-1; i >= 0; i--) {
        s2 += word[i];
    }
    s2 += ' ';
}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;

    while (ss >> word)
    {
        fun(word);
    }
    s2.pop_back();
    cout << s2 << endl;

    return 0;
    
}