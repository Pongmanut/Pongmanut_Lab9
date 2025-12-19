#include <iostream>
using namespace std;

void printO(int N, int M) {
    if (N <= 0 || M <= 0) {
        cout << "Invalid input" << endl;
        return;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "O";
        }
        cout << endl;
    }
}