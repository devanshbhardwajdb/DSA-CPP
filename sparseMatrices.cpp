#include<bits/stdc++.h>
using namespace std;

// Define a structure to hold the triplet for non-zero elements
struct Element {
    int row;
    int col;
    int value;
};

int main() {
    const int m = 4, n = 4;
    int matrix[m][n] = {
        {0, 0, 3, 0},
        {4, 0, 0, 7},
        {0, 0, 0, 0},
        {0, 9, 0, 0}
    };

    // Vector to store the non-zero elements
    vector<Element> sparseMatrix;

    // Converting the 2D matrix into sparse representation
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != 0) {
                sparseMatrix.push_back({i, j, matrix[i][j]});
            }
        }
    }

    // Display the sparse matrix representation
    cout << "Sparse Matrix Representation (row, col, value):\n";
    for (const auto &elem : sparseMatrix) {
        cout << "(" << elem.row << ", " << elem.col << ", " << elem.value << ")\n";
    }

    return 0;
}
