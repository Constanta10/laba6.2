/*Дана матрица размера M × N (M — четное число). Поменять местами верхнюю и нижнюю половины матрицы.*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    const int M = 10;
    const int N = 10;
    int A, B;
    cout << "введите размеры матрицы:";
    cin >> A >> B;
    if (!(1 <= A && A <= M && A%2==0 && 1 <= B && B <= N)) {
        cerr << "Ошибка: количество должно находиться в диапазоне [1; " << M << "]" << endl;
        return 1;
    }
    int matrix[M][N];
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cin >> matrix[i][j];
        }
    }

    // Поменять местами верхнюю и нижнюю половины матрицы
    for (int i = 0; i < A / 2; i++) {
        for (int j = 0; j < B; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i + A / 2][j];
            matrix[i + A / 2][j] = temp;
        }
    }

    std::cout << "Матрица после замены половин:" << std::endl;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << std::endl;
    }
    return 0;
}
