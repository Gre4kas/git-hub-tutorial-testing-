#include <iostream>
using namespace std;

/*
int factorial()
{ 
    int factorial = 10;
    int i = 1;
    long n = 1;
    do {
    n *= i;
    i++;
    } while (i <= factorial);

    cout << "n = " << n <<endl;
}
*/


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
    int n = 10;
    for(int i = 0; i < n; i++)
    {
        int factorialCout = factorial(i);
        cout << "n = " << factorialCout << endl;
    }
}
