#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int year, months, day;
    year = n/365;
    n = n - (year*365);
    months = n/30;
    n = n - (months*30);
    day = n;
 
    cout << year << " years" << endl;
    cout << months << " months" << endl;
    cout << day << " days" << endl;
 
 
    return 0;
}