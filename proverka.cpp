#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

// int factorial()
// { 
//     int factorial = 10;
//     int i = 1;
//     long n = 1;
//     do {
//     n *= i;
//     i++;
//     } while (i <= factorial);

//     cout << "n = " << n <<endl;
// }

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
    // int i, l = 6, x;
    // cout <<"Hello World\n";
    // cout <<"Привет мир\n";
    // if ( -1 < 1)
    // {
    //     cout << "da";
    // }
    // else
    // {
    //     cout << "no";
    // }
    // cin >> x ;
    // int *a = new int[l]; 
    // for (i = 0; i < l; i++) 
    // { 
    //     a[i] = 0; 
    //     cout << a[i];
    // } 
    // int num = 5;
    // if (5 != 5)
    // {
    //     cout << " da";
    // }
    // else
    // {
    //     cout << "no";
    // }
    // double num2, a;
    // a = 0.3;
    // num2 = (abs(sin(a)) * abs(cos(a)));
    // cout << num2;
    // float c1 = 0.75; // Имя переменной 
    // cout << "c1: "<< c1 << endl;

    // float *p1 = &c1; // Адрес переменной
    // cout << "*p1: " << *p1 << endl;

    // *p1 = 2.5; // Меняем адрес переменной 
    // cout << "*p1: " <<*p1 << endl;

    // float c2 = *p1 + 1; // Арифметическое додавання 
    // cout <<"c2: " << c2 << endl;

    // float *p2 = &c2; // Адрес переменной
    // cout << "*p2: " <<*p2 << endl;

    // float r = *p2 + 2; // Арифметическое додавання 
    // cout << "r: " << r << endl;
    // for (int i=0; i<10; i++) if(i%2) cout << i%2;
    // int n = 10;
    // for(int i = 0; i < n; i++)
    // {
    //     int factorialCout = factorial(i);
    //     cout << "n = " << factorialCout << endl;
    // }
    
}

int main()
{
    float x, y;
    while(true)
    {
        cout << "Write a number x: ";
        cin >> x;
        cout << "Write a number y: ";
        cin >> y;
        if (y >= x*x && y <= exp(x) && y <= exp(-x))
        {
            cout << "Inside dot\n";
            cout << x + y << "\n";
        }
        else // if ((y <= x*x) || (y >= exp(x)) || (y >= exp(-x))) 
        {
            cout << "Outside dot!!\n";
            cout << x - y << "\n";
        }
    }
}




