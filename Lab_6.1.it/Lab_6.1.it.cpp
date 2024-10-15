#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Create(int* c, const int size, const int Low, const int High) // Формування масиву
{
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

void Print(const int* c, const int size) // Виведення масиву
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
}

int Count(const int* c, const int size) //Кількість елементів,які задовольняють критерій
{
    int N = 0;
    for (int i = 0; i < size; ++i) {
        if (c[i] % 2 != 0 && i % 13 != 0) {
            N++;
        }
    }
    return N;
}

int Sum(const int* c, const int size)//Сума елементів,які задовольняють критерій
{
    int S = 0;
    for (int i = 0; i < size; ++i) {
        if (c[i] % 2 != 0 && i % 13 != 0) {
            S += c[i];
        }
    }
    return S;
}

void updateArray(int* c, const int size)// Заміна елементів, які задовольняють критерій на 0
{
    for (int i = 0; i < size; i++)
        if (c[i] % 2 != 0 && i % 13 != 0) {
            c[i] = 0;
        }
}

int main()
{
    srand((unsigned)time(NULL)); //Ініціалізація генератора випадкових чисел
    const int n = 21;
    int c[n];

    int Low = 15;
    int High = 85;

    Create(c, n, Low, High);
    Print(c, n);

    int count = Count(c, n);
    int sum = Sum(c, n);
    cout << "N: " << count << endl;
    cout << "S: " << sum << endl;

    updateArray(c, n);
    Print(c, n);

    return 0;
}