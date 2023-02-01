#include <iostream>
#include <math.h>
using namespace std;

// Функція факторіл
int factorial(int m)
{
    int F = 1;

    for(int i=1; i<=m; ++i)
    {
    	F *= i;
    }
    return F;
}


int main() 
{
    //  Зміни 
    int n = 0, momo = 1, step = 0;
    double x, sum = 1, num, check;
    bool minus = true;
    double eps(0.0000001);
    cout << "x = ";
    cin >> x;

    // Цикл
    while (true) 
    {
        //  Формула номер 1
        check = sin(x) / x;
        //  Цикл -1, 1, -1, 1...
        if(!minus)
        {
            // Формула норме 2 плюсова
            num = (pow(x,n) / factorial(momo));
            minus = true;
        }
        else if (minus)
        {
            // Формула норме 2 минусова
            num = -1*(pow(x,n) / factorial(momo));
            minus = false;
        }
        step++;
        n += 2;
        momo += 2;
        sum += num; 
        cout << num << endl;
        //  Якщо сума бильше за формулу 
        if (sum > check)
        {
            //  Формула до приблизительного sum < check
            num = (pow(x,n-=2) / factorial(momo-=2));
            sum -= num;
            break;
        }
    }
    // Вихід даних 
    cout << "check: " << check << "\nsum: " << sum << "\nsteps: " << step << "\nnum: " << num;
    return 0;
}