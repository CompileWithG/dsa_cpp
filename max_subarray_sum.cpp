#include <bits/stdc++.h>
using namespace std;

int maxCrossingSum(vector<int>& arr, int l, int m, int r) {
    int leftSum = INT_MIN;
    int sum = 0;
    for (int i = m; i >= l; i--) {
        sum += arr[i];
        leftSum = max(leftSum, sum);
    }

    int rightSum = INT_MIN;
    sum = 0;
    for (int i = m + 1; i <= r; i++) {
        sum += arr[i];
        rightSum = max(rightSum, sum);
    }

    return leftSum + rightSum;
}

int maxSubArray(vector<int>& arr, int l, int r) {
    if (l == r) return arr[l];

    int m = (l + r) / 2;

    int leftMax = maxSubArray(arr, l, m);
    int rightMax = maxSubArray(arr, m + 1, r);
    int crossMax = maxCrossingSum(arr, l, m, r);

    return max({leftMax, rightMax, crossMax});
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();
    cout << "Maximum Subarray Sum: " << maxSubArray(arr, 0, n - 1);
    return 0;
}
