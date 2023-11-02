#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void Create(int* t, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++) {
        t[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int* t, const int size)
{
    for (int i = 0; i < size; i++) {
        cout << setw(4) << t[i];
    }
    cout << endl;
}

int Sum(int* t, const int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (t[i] % 2 != 0 || t[i] < 0) {
            sum += t[i];
            t[i] = 0;
        }
    }
    return sum;
}

int Count(int* t, const int size)
{
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (t[i] % 2 != 0 || t[i] < 0) {
            count++;
        }
    }
    return count;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 25;
    int t[n];
    int Low = -5;
    int High = 12;

    Create(t, n, Low, High);
    Print(t, n);
    cout << "Sum: " << Sum(t, n) << ", Count: " << Count(t, n) << endl;
    Print(t, n);

    return 0;
}
