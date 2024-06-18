#include<bits/stdc++.h>

using namespace std;

vector<int> fun(vector<int> a, vector<int>  b) {
    vector<int> ans(a.size()+b.size());

    ans = b;
    ans.insert(ans.begin()+a.size(), a.begin(), a.end());

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v1(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    vector<int> ans = fun(v1, v2);

    for (int i : ans) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}