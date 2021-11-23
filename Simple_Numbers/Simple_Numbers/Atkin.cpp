#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector <int> Atkin( vector <int> Massiv)
{

    int limit = Massiv.size();
    int sqr_lim;
    vector <bool> is_prime;

    int limit = Massiv.size();
    int sqr_lim;
    vector <bool>  is_prime;

    int x2, y2;
    int i, j;
    int n;
    is_prime.resize(Massiv.size());
    // Инициализация решета
    sqr_lim = (int)sqrt((long double)limit);
    for (i = 0; i <= limit; ++i)

        is_prime.push_back(false);

        is_prime.push_back(false) ;

    is_prime[2] = true;
    is_prime[3] = true;
    // Предположительно простые — это целые с нечётным числом
    // представлений в данных квадратных формах.
    // x2 и y2 — это квадраты i и j (оптимизация).
    x2 = 0;
    for (i = 1; i <= sqr_lim; ++i) {
        x2 += 2 * i - 1;
        y2 = 0;
        for (j = 1; j <= sqr_lim; ++j) {
            y2 += 2 * j - 1;

            n = 4 * x2 + y2;
            if ((n <= limit) && (n % 12 == 1 || n % 12 == 5))
                is_prime[n] = !is_prime[n];

            // n = 3 * x2 + y2; 
            n -= x2; // Оптимизация
            if ((n <= limit) && (n % 12 == 7))
                is_prime[n] = !is_prime[n];

            // n = 3 * x2 - y2;
            n -= 2 * y2; // Оптимизация
            if ((i > j) && (n <= limit) && (n % 12 == 11))
                is_prime[n] = !is_prime[n];
        }
    }

    // Отсеиваем кратные квадратам простых чисел в интервале [5, sqrt(limit)].
    // (основной этап не может их отсеять)
    for (i = 5; i <= sqr_lim; ++i) {
        if (is_prime[i]) {
            n = i * i;
            for (j = n; j <= limit; j += n)
                is_prime[j] = false;
        }
    }

    int count = 0;

    int count=0;

    for (auto elem : is_prime) {
        if (elem && (elem % 3 != 0) && (elem % 5 != 0)) {
            count++;
        }
    }

    // Вывод списка простых чисел в консоль.
    vector <int> finded;
    finded.reserve(count);
    finded.push_back(2);
    finded.push_back(3);
    finded.push_back(5);

    vector <int> finded;
    finded.reserve(count);
    finded.push_back(2);
    finded.push_back(3);
    finded.push_back(5);
    // Вывод списка простых чисел в консоль.

    for (i = 6; i <= limit; ++i) {  // добавлена проверка делимости на 3 и 5. В оригинальной версии алгоритма потребности в ней нет.
        if ((is_prime[i]) && (i % 3 != 0) && (i % 5 != 0))
            finded.push_back(i);
    }
    return finded;
}