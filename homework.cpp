#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    double a, b, result3;
    double resultTwo = 1;
    cout << "Number: ";
    cin >> b;
    cout << "Limit the number: ";
    cin >> a;
    while(true)
    {
        if(resultTwo < a)
        {
            resultTwo *= b;
            n++;
        }
        else
        {
            result3 = resultTwo / b;
            n--;
            cout << "a = " << a << endl << "result = " << result3 << endl << "n = " << n;
            break;
        }
    }
}