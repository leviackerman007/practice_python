#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> vec;
        for (long long i = 1; i * i <= 1e9; i++) {
            if (n % i == 0) {
                vec.push_back(i);
                if (i != n / i) vec.push_back(n / i);
            }
        }

        sort(vec.begin(), vec.end());

        int size = 1, maxi = 1;
        for (long long i = 1; i < (long long)vec.size(); i++) {
            if (vec[i] - vec[i - 1] == 1) {
                size++;
            } else {
                size = 1;
            }
            maxi = max(maxi, size);
        }

        cout << maxi << "\n";
    }
    return 0;
}

