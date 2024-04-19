#include<iostream>
#include<iomanip>
 
using namespace std;
 
int main()
{
    char ch;
 
    cin >> ch;
 
 
    if (ch == 'z') {
        ch = 'a';
    } else {
        ch = ch + 1;
    }
 
    cout << ch << endl;
 
    return 0;
}