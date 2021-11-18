
#include <iostream>
#include <vector>
#include <string>
#include < math.h >

using namespace std;

long NOD(int a, int b) {

    int nod = 0;
    for (int i = a; i > 0; i--) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            nod = i;
            break;
        }
    }
    //cout << "Наибольший общий делитель: " << nod << endl;
    return nod;
}

/* Функция schet работает корректно до тех пор, пока переменная avstepeni < 18 446 744 073 709 551 615,
 максимальный диапазон типа данных не позволяет проверить любые числа по методу простоты Ферма,
поэтому в качестве рандомных чисел возьмём какое-нибудь маленькое число,
 значение которого при возведении в степень будет попадать в необходимый диапазон */

/*void schet(const unsigned long long p)
{
    unsigned long long a = 0, avstepeni = 0, povt = 0;
    for (povt = 0; povt < 20; povt++)
    {
        if (p == 1)
        {
            cout << "Число " << p << " является простым" << endl;
            break;
        }
        
        a = 1 + rand() % (p - 1);
        cout << "Случайное число: " << a << endl;

        if (NOD(p, a) == 1)
        {
            avstepeni = pow(a, (p - 1));
            cout << avstepeni << "    " << (p - 1) << endl;
            if (avstepeni % p == 1)
            {
                cout << "Число " << p << " является простым " << endl;
            }
            else
            {
                cout << "Число " << p << " является составным " << endl;
                break;
            }
        }
        else
        {
            cout << "Число " << p << " является составным " << endl;
            break;
        }
        
    }
}*/

void schet(const unsigned long long p)
{
    unsigned long long a = 0, avstepeni = 0, povt = 0;
    //for (povt = 0; povt < 20; povt++)
    //{
        if (p == 1)
        {
            cout << "Число " << p << " является простым" << endl;
            //break;
        }
        
        a = 1 + rand() % (p - 1);
        a = 2;
        
        //cout << "Случайное число: " << a << endl;

        if (NOD(p, a) == 1)
        {
            avstepeni = pow(a, (p - 1));
            //cout << avstepeni << "    " << (p - 1) << endl;
            if (avstepeni % p == 1)
            {
                cout << "Число " << p << " является простым " << endl;
            }
            else
            {
                cout << "Число " << p << " является составным " << endl;
                //break;
            }
        }
        else
        {
            cout << "Число " << p << " является составным " << endl;
            //break;
        }

    //}
}


unsigned int main()
{
    setlocale(LC_ALL, "Russian");
    vector <unsigned long long> vvod;
    unsigned long long p = 0, i = 0;
    cout << "Введите 0 , чтобы закончить ввод. " << endl << "Введите необходимоe количество натуральных чисел: ";

    while (1) //Заполнение вектора введёнными числами
    {
        cin >> p;
        if (p == 0)
            break;
        else
            vvod.push_back(p);
    }

    for (i; i < vvod.size(); i++)
    {
        schet(vvod[i]);
    }
}

