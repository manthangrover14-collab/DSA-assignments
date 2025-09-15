#include <iostream>
using namespace std;

void reverseArray() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n / 2; i++) swap(arr[i], arr[n - i - 1]);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void matrixMultiplication() {
    int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2;
    cout << "Enter rows and cols of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and cols of second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2) {
        cout << "Matrix multiplication not possible" << endl;
        return;
    }
    cout << "Enter first matrix: ";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];
    cout << "Enter second matrix: ";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < c1; k++) c[i][j] += a[i][k] * b[k][j];
        }
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) cout << c[i][j] << " ";
        cout << endl;
    }
}

void transposeMatrix() {
    int a[10][10], r, c;
    cout << "Enter rows and cols of matrix: ";
    cin >> r >> c;
    cout << "Enter matrix: ";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    cout << "Transpose:" << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) cout << a[j][i] << " ";
        cout << endl;
    }
}

int main() {
    int ch;
    while (true) {
        cout << "1. Reverse Array\n2. Matrix Multiplication\n3. Transpose Matrix\n4. Exit\nEnter choice: ";
        cin >> ch;
        switch (ch) {
            case 1: reverseArray(); break;
            case 2: matrixMultiplication(); break;
            case 3: transposeMatrix(); break;
            case 4: return 0;
        }
    }
}
