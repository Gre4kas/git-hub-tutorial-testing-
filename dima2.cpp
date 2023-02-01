#include <iostream>
#include <math.h>
using namespace std;

int factorial(int m)
{
    int F = 1;

    for(int i=1; i<=m; ++i)
    {
    	F *= i;
    }
    return F;
}

int main() {
 int n{0}, m{1};
 bool minus = true;
 double x, sum{}, num{ 1 };
 double eps{ -1 };
 cout << "x = ";
 cin >> x;
 while (eps<=0){
  cout << "Type positive eps: ";
  cin >> eps;
 } 
 while (abs(num) > eps) {
    if(!minus)
        {
            // Формула норме 2 плюсова
            num = (pow(x,n) / factorial(m));
            minus = true;
        }
    else if (minus)
        {
            // Формула норме 2 минусова
            num = -1*(pow(x,n) / factorial(m));
            minus = false;
        }
    n++;
    m++;
    sum += num; 
 }
 cout << "check: " << sin(x) / x << "\nsum: " << sum << "\nsteps: " << n;
 return 0;
}