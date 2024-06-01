#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    stringstream ss(s);

    string word;

    int count_word = 0;

    while (ss >> word)
    {
        char first_char = word[0];
        if ((first_char >= 'A' && first_char <= 'Z') || (first_char >= 'a' && first_char <= 'z')) {
            count_word++;
        }
    }
    
    cout << count_word << endl;

    return 0;
}