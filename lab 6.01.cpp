#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

void PrintCriteria(int* a, const int size) {
    cout << "Елементи, що задовольняють критеріям (додатні або з парними індексами): ";
    for (int i = 0; i < size; i++) {
        if (a[i] > 0 || i % 2 == 0) {
            cout << setw(4) << a[i];
        }
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL)); // Ініціалізація генератора випадкових чисел
    const int n = 24;
    int p[n];
    int Low = -10;
    int High = 14;

    Create(p, n, Low, High);
    Print(p, n);
    PrintCriteria(p, n);

    return 0;
}
