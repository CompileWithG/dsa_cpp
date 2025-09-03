#include <bits/stdc++.h>
using namespace std;

double fractionalKnapsack(int W, vector<int>& value, vector<int>& weight) {
    int n = value.size();
    vector<pair<double, int>> ratio; // {value/weight, index}

    // Compute ratios
    for (int i = 0; i < n; i++) {
        double r = (double)value[i] / weight[i];
        ratio.push_back({r, i});
    }

    // Sort by ratio in descending order
    sort(ratio.rbegin(), ratio.rend());

    double finalValue = 0.0;

    for (int i = 0; i < n; i++) {
        int idx = ratio[i].second;
        if (weight[idx] <= W) {
            // Take full item
            W -= weight[idx];
            finalValue += value[idx];
        } else {
            // Take fraction
            finalValue += value[idx] * ((double)W / weight[idx]);
            break;
        }
    }

    return finalValue;
}

int main() {
    int W = 50; // Knapsack capacity
    vector<int> value = {60, 100, 120};
    vector<int> weight = {10, 20, 30};

    cout << "Maximum value in Knapsack = " 
         << fractionalKnapsack(W, value, weight) << endl;

    return 0;
}
