#include <iostream>
using namespace std;

int arr[32];
int mini = INT_MAX;

void Difference(int i, int sum_m, int sum_p, int n) {
    if (i == n) {
        int d = abs(sum_m - sum_p);
        if (d < mini) {
            mini = d;
        }
        return;
    }
    Difference(i + 1, sum_m + arr[i], sum_p, n);
    Difference(i + 1, sum_m, sum_p + arr[i], n);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    Difference(0, 0, 0, n);
    cout << mini;
    return 0;
}
