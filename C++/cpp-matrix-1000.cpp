#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
int main() {
    const int size = 1000;
    vector<vector<int>> arr1(size, vector<int>(size));
    vector<vector<int>> arr2(size, vector<int>(size));
    vector<vector<int>> arrResult(size, vector<int>(size));

    // Initialize arrays
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            arr1[i][j] = i + j;
            arr2[i][j] = i - j;
        }
    }

    auto start = chrono::high_resolution_clock::now();

    // Matrix multiplication
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            arrResult[i][j] = 0;
            for (int k = 0; k < size; ++k) {
                arrResult[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    cout << "Execution time: " << duration.count() << " seconds" << endl;

    return 0;
}
//execution time is 9.6414 seconds