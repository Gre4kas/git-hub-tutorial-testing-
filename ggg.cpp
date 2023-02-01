#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std; 

int main()
{
    int N = 5;
    int sus = N += ++N+N++;
    cout << sus;

}