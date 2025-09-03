#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, p, n;
    cout << "Enter rows and columns of first matrix (m p): ";
    cin >> m >> p;
    cout << "Enter columns of second matrix (n): ";
    cin >> n;

    vector<vector<int>> A(m, vector<int>(p));
    vector<vector<int>> B(p, vector<int>(n));
    vector<vector<int>> C(m, vector<int>(n, 0));

    cout << "Enter first matrix:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            cin >> A[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    // Matrix Multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
