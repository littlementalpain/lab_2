// Пусть дано натуральное число n и вещественные числа a1, a2, ..., an, которые вводятся по одному.
// Получите: a1 + 2a2 + 3a3 + ... + nan

#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    bool flag = true;
    while (flag)
    {
        unsigned int n;
        double sum = 0;
        cout << "введите целое число n: "; cin >> n;
        for (int i = 1; i <= n; i++)
        {
            double a;
            cout << "введите вещественное число a" << i << ": "; cin >> a;
            sum += a * i;
        }
        cout << "искомая сумма равна: " << sum << endl;
        char choice;
    label:
        cout << "хотите начать заново или выйти? 1 - начать заново, 2 - выйти ";
        cin >> choice;
        switch (choice)
        {
        default:
            cout << "неверный ввод! попробуйте снова" << endl;
            goto label;
        case '1':
            flag = true;
            break;
        case '2':
            flag = false;
            break;
        }
    }
}
